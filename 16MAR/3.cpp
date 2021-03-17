#include<iostream>

using namespace std;

int main(){
	int num,fDig,lDig,temp;
	cout<<"Input a num :";
	cin>>num; //123456
	temp = num;
	
	lDig = num%10;
	
	for(; temp>10 ; temp = temp/10){
	}
	
	fDig = temp;
	cout<<"First digit: "<<fDig<<endl;
	cout<<"Last digit: "<<lDig;
	
	return 0;
}
