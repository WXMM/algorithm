/*
	���㷨ʵ���˹鲢���򣬲�����������Ż�
	
	data��2019��9��20��15:06:18
	by��wx
    change��
		1����L��R��������ϲ�Ϊһ��temp��ʱ����
		2��ȡ���˲�������б����������������ֵ�ķ�ʽ���ܸо�ʵ�ֵĺܱ�׾��������������������Ч��� 
*/

#include<iostream>
using namespace std;
const int maxn=500000;
int temp[maxn];
//merge����ʵ���������в�֣�����ϲ��Ĳ�������Ҫ����һ���µ���ʱ���� 
void merge(int a[],int left,int mid,int right)
{	
	int i,j;
	i=left;
    while(i<mid){
    	temp[i]=a[i];
		i++;		
	}
    while(i<right){
    	temp[i]=a[i];
		i++;	
	}  
	    
    i=left,j=mid;
	
    for(int k=left;k<right;k++)
    {
    	if(i>=mid)
            a[k]=temp[j++];
        else if(j>=right)
            a[k]=temp[i++];
        else if(temp[i]<=temp[j])
            a[k]=temp[i++];
        else
            a[k]=temp[j++];
    }
}

//mergesortʵ����ϵ�еĲ�ֵݹ飬ֱ����С���� 
void mergesort(int a[],int left,int right)
{
    if(left+1<right)
    {
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid,right);
        merge(a,left,mid,right);
    }
}
int main()
{
    int i;
    int a[9]={2,5,8,4,66,33,1,0,5};
    for(i=0;i<9;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    mergesort(a,0,9);
    for(i=0;i<9;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
