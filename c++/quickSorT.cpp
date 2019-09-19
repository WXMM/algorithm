#include <iostream>

using namespace std;

void printArr(int *arr){
	for(int i=0;i<10;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

void quickSort(int *pArr,int l,int r){
	int p;
	if(l>r) return;
	p = pArr[r];
	int i=l,j=r;
	while(i!=j){
		while(pArr[i]<=p && i<j) i++;
		while(pArr[j]>=p && i<j) j--;
		if(i<j) swap(pArr[i],pArr[j]);
		printArr(pArr);		
	}
	swap(pArr[r],pArr[i]);
	quickSort(pArr,l,i-1);
	quickSort(pArr,i+1,r);	
}

int main(){
	int arr[10] = {8,3,4,6,12,45,23,16,9,10};
	quickSort(arr,0,9);
	for(int i=0;i<10;i++){
		cout << arr[i] << " ";
	}
	return 0;
} 
