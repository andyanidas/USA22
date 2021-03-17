#include<iostream>

using namespace std;

int main(){
	int num,temp,total = 0;
	cout<<"Input a num :";
	cin>>num; //123456
	temp = num;
	
	
	
	for(; temp>0 ; temp = temp/10){
		total = total + temp%10;
	}
	
	cout<<"Sum = "<<total;
	
	
	return 0;
}
