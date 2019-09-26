#include <iostream>
#include <string>
using namespace std;
const int MAX=100;
int a[MAX+1];
int c[MAX+1];
int main()
{ 
	string aa;
	int b;
	cin >>aa>>b;
//	cin >>aa;
	//ÄæÐò´æ
	a[0]=aa.length();
	for(int i=0;i<aa.length();i++) 
	{
		a[aa.length()-i]=aa[i]-'0';
	}
	int x=0;
	c[0]=a[0];
	for(int i=a[0];i>0;i--)
	{
		c[i]=10*x+a[i];
		x=c[i]%b;
		c[i]=c[i]/b;		
	}
	
	while(c[c[0]]==0 && c[0]>1)
	  c[0]--;
	  
	for(int i=c[0];i>0;i--)
	  cout <<c[i];
	cout <<endl<<x;
	return 0;

}
