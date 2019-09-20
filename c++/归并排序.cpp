/*
	该算法实现了归并排序，并对其进行了优化
	
	data：2019年9月20日15:06:18
	by：wx
    change：
		1、将L、R两个数组合并为一个temp临时数组
		2、取消了拆分数组中必须在最后面添加最大值的方式（总感觉实现的很笨拙），增加两个条件语句等效替代 
*/

#include<iostream>
using namespace std;
const int maxn=500000;
int temp[maxn];
//merge函数实现了子序列拆分，排序合并的操作，需要借助一个新的临时数组 
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

//mergesort实现了系列的拆分递归，直至最小序列 
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
