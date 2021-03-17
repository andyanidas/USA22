#include<iostream>

using namespace std;

int main(){
	int num,temp,rev=0;
	cout<<"Input a num :";
	cin>>num; //123456
	temp = num;
	
	
	
	for(; temp>0 ; temp = temp/10){
		rev = rev*10;
		rev = rev + temp%10;
	}
	
	cout<<"Reverse of "<<num<<" = "<<rev;
	
	
	return 0;
}
