#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int i,a[4],ans;
	string T[4];
	T[0]="0 1 2 3 4 5 6 7";
	T[1]="1 3 5 7";  
	T[2]="2 3 6 7";   
	T[3]="4 5 6 7";
	
	cout<<"读心术猜数"<<endl;
	cout<<"请从下面七个数中,选一个记在心里."<<endl;
	cout<<T[0]<<endl;
	system("pause");
	
	for(i=1;i<=3;i++)
	{
		system("cls");
		cout<<i<<"问：下面有你心里想的数字吗？0：没有，1：有。"<<endl;
		cout<<T[i]<<endl;
		
		
		//保证输入的是1 或者 0 
		do
		{
			cin>>a[i];
		}while(a[i] != 0 && a[i] != 1);
	}
	
	cout << "打印出a[i]" << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	system("pause");
	
	ans = 4*a[3] + 2*a[2] + a[1];
	
	system("cls");
	cout<<"你心中想的数字是 :"<<endl;
	cout<<ans<<endl;
	system("pause");
	return 0; 
}
