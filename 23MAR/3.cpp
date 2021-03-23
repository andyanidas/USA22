#include<iostream>

using namespace std;

int main(){
	int num,total = 0;
	cin>>num; //12345 -> 1+2+3+4+5+6 = 21
	
	for(;num>0;num/=10){
		total = total + num%10; //total = 6 + 5
	}
	
	cout<<total;
	
	
	
	return 0;
}
