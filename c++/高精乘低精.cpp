/*��N! n���Ϊ100*/ 

#include <iostream>
using namespace std;
const int MAX=500;
int a[MAX];
int main()
{
	int n;
	cin >> n;
	a[1]=1;
	int len =1;   //�˻���λ�� 
	for(int i=2;i<=n;i++)
	{
		int c=0;
		int j;
		for(j=1;j<=len;j++)
		{
			a[j]=c+a[j]*i;
			c=a[j]/10;
			a[j]=a[j]%10;
		} 
		a[j]=c;
		while(a[j]>=10)  // ���λ��λ���� 
		{
			a[j+1]+=a[j]/10;
			a[j]=a[j]%10;
			j++;
		}
		len=MAX;
		while(a[len]==0&&len>1)
		   len--;
     
		//������
		cout <<i<<":"<<endl;
		for(int k=len;k>=1;k--)
		  cout <<a[k];
		cout <<endl;
			
	}
}
