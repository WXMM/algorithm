#include<iostream>
using namespace std;
#include <cstdio>
 
int fun(int m,int n)
{
	cout<<"-----  m="<<m<<"------  n="<<n<<endl;
	if(m==0)
		return 1;
	if(n==1)
		return 1;
	if(m<n)
		return fun(m,m);
	if(m>=n)
		return fun(m-n,n)+fun(m,n-1);
}
 
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		fflush(stdin);
		cin>>m>>n;
		cout<<fun(m,n)<<endl;;
	}
 }

