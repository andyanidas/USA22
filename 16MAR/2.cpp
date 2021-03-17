#include<iostream>

using namespace std;

int main(){
	int num,count = 0;
	cout<<"Input a num :";
	cin>>num; //123456
	
	for(; num>0 ; num = num/10){
		count++; //increment
	}
	
	cout<<"Number of digits: "<<count;
	
	
	return 0;
}
