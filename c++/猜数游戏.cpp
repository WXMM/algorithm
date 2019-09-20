#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	cout<<"请投入60元"<<"   .......  （5秒后）  " <<"请开始游戏"<<endl;
	int a,b,c=0,d=10;
	float e;
	srand(time(NULL));
	a=rand()%101;
	 do
	{	
		cout<<"请输入一个整数：";
		//cin>>b; 
		while(!(cin >> b))
		{
			cout<<"输入数据类型出错，请输入一个整数：";
			cin.clear(); //复为标志，将cin中的所有标志设置为有效状态
			cin.sync(); //清空流	
		};
	
		c++;d--; 
		cout<<"您还剩"<<d<<"次机会";
		if(b>a)cout<<"   big     请投入2元继续游戏"<<endl;
        if(b<a)cout<<"   small   请投入2元继续游戏"<<endl;		 
        if(b==a)cout<<"    right";
	} 
	 while(c<10 && b!=a);
	 
	 if(c!=a) cout<<"   "<<"正确答案"<<a;
	 cout<<endl<<"您可以选择："<<endl<<"      再投入30元继续游戏！"<<endl<<"      我退出！"<<endl;
	 cout<<"奖励："<<b-30<<"元"<<endl; 
	 return 0;
}
