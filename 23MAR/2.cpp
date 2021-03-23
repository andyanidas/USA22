#include<iostream>

using namespace std;

int main(){
	int num,fDig,lDig;
	cin>>num; //123456
	lDig = num%10;
	for(;num>10;num = num/10){
		//body
	}
	fDig = num;
	cout<<"First Digit = "<<fDig<<endl;
	cout<<"Last Digit = "<<lDig;
	
	return 0;
}
