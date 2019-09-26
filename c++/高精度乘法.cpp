#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
using namespace std;
char a[200],b[200];
int aa[201],bb[201],cc[402],alen,blen,clen,jw;
int main()
{
	cin>>a>>b;
	alen=strlen(a);
	blen=strlen(b);
	for(int i=0;i<alen;i++)
		aa[alen-i]=a[i]-'0';
	for(int i=0;i<blen;i++)
		bb[blen-i]=b[i]-'0';	
	for(int i=1;i<=alen;i++)
	{
		jw=0;
 		for(int j=1;j<=blen;j++)
		{
			cc[i+j-1]+=(aa[i]*bb[j])+jw;
			jw=cc[i+j-1]/10;
			cc[i+j-1] %= 10;
		}
		cc[i+blen]=jw;
	}
	clen=alen+blen; 
	while((cc[clen]==0) && (clen>1)) clen--;

	for(int i=clen;i>=1;i--)
		cout<<cc[i];
	cout<<endl;
	return 0;
	} 
