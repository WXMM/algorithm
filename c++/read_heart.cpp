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
	
	cout<<"����������"<<endl;
	cout<<"��������߸�����,ѡһ����������."<<endl;
	cout<<T[0]<<endl;
	system("pause");
	
	for(i=1;i<=3;i++)
	{
		system("cls");
		cout<<i<<"�ʣ����������������������0��û�У�1���С�"<<endl;
		cout<<T[i]<<endl;
		
		
		//��֤�������1 ���� 0 
		do
		{
			cin>>a[i];
		}while(a[i] != 0 && a[i] != 1);
	}
	
	cout << "��ӡ��a[i]" << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	system("pause");
	
	ans = 4*a[3] + 2*a[2] + a[1];
	
	system("cls");
	cout<<"��������������� :"<<endl;
	cout<<ans<<endl;
	system("pause");
	return 0; 
}
