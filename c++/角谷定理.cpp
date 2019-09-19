#include<iostream>
using namespace std;
int n=0;
void jiaogu(int num){
	cout << num << " ";
	if(num==1){
		cout<<endl<<"¹²"<<n<<"´Î";
		return;
	}
	n++;
	if(num%2==1){
		jiaogu(num*3+1);
	}else{
		jiaogu(num/2);
	}
}

int main(){
	int num;
	cin>>num;
	jiaogu(num); 
	return 0;
} 
