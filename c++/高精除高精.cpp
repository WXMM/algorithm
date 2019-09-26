#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int MAX =200;
int a[MAX+1], b[MAX+1],c[MAX+1],tmp[MAX+1];

//把字符串转成INT类型，逆序保存，高位存高位 
void init(int a[],string b)
{
    int len=b.length();
    a[0]=len;
    for(int i=1;i<=len;i++)
    a[i]=b[len-i]-'0';
} 


//1 大   -1小  0一样 
int compare(int a[],int b[] )
{
	if(a[0]>b[0])
	    return 1;
	if(a[0]<b[0])
	    return -1;
	for(int i=a[0];i>=1;i--)
	{
		if(a[i]>b[i])
		   return 1;
		if(a[i]<b[i])
		   return -1;
	} 
	return 0; 
}

 
//把数组a copy 到数组b，低位那边空  offset个空间，保持高位对齐 
void movearray(int b[],int a[],int offset)
{
	memset(b,0,(MAX+1)*4);
	b[0]=a[0]+offset;
	for(int i=1;i<=a[0];i++)
	  b[i+offset]=a[i];
}

//减法
 void  subtraction(int a[],int b[])
 {
 	for(int i=1;i<=a[0];i++)
 	{
 	    if(a[i]>=b[i])
		   a[i]=a[i]-b[i];
		else
		{
//		    cout <<a[i];
			a[i]=a[i]-b[i]+10;
		    a[i+1]--;
		}	
	}
	while(a[0]>1&&a[a[0]]==0)
	   a[0]--;
 }
 
 //除法
 void divide(int a[],int b[]) 
 {
 	if(compare(a,b)==0)
 	{
 		c[0]=1;
 		c[1]=1;
 		return;
	}
	else if(compare(a,b)==-1)
	{
		c[0]=1;
 		c[1]=0;
 		return;
	}
 	   
 	int offset=a[0]-b[0]; 
 	c[0]=a[0]-b[0]+1;
  
 	for(int i=c[0];i>=1;i--)
 	{	
	    movearray(tmp,b,offset);
  		while(compare(a,tmp)>=0)
 		{
 			subtraction(a,tmp);
			c[i]++;		
		} 		
	    offset --;
	}
	
	while(c[0]>1&&c[c[0]]==0)
	    c[0]--;
 }
 
 
 int main()
 {
 	string aa,bb;
 	cin>>aa>>bb;
// 	memset(a,0,sizeof(a));
// 	memset(b,0,sizeof(b));
// 	memset(c,0,sizeof(c));
 	init(a,aa);
 	init(b,bb);
 	divide(a,b);
  	  
 	for(int i=c[0];i>=1;i--)
 	{
 		cout<<c[i];
	}
	cout <<endl;
//	for(int i=a[0];i>=1;i--)
//	cout<<a[i];
    return 0;
 }
