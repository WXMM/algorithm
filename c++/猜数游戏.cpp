#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	cout<<"��Ͷ��60Ԫ"<<"   .......  ��5���  " <<"�뿪ʼ��Ϸ"<<endl;
	int a,b,c=0,d=10;
	float e;
	srand(time(NULL));
	a=rand()%101;
	 do
	{	
		cout<<"������һ��������";
		//cin>>b; 
		while(!(cin >> b))
		{
			cout<<"�����������ͳ���������һ��������";
			cin.clear(); //��Ϊ��־����cin�е����б�־����Ϊ��Ч״̬
			cin.sync(); //�����	
		};
	
		c++;d--; 
		cout<<"����ʣ"<<d<<"�λ���";
		if(b>a)cout<<"   big     ��Ͷ��2Ԫ������Ϸ"<<endl;
        if(b<a)cout<<"   small   ��Ͷ��2Ԫ������Ϸ"<<endl;		 
        if(b==a)cout<<"    right";
	} 
	 while(c<10 && b!=a);
	 
	 if(c!=a) cout<<"   "<<"��ȷ��"<<a;
	 cout<<endl<<"������ѡ��"<<endl<<"      ��Ͷ��30Ԫ������Ϸ��"<<endl<<"      ���˳���"<<endl;
	 cout<<"������"<<b-30<<"Ԫ"<<endl; 
	 return 0;
}
