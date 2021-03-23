#include<iostream>

using namespace std;

int main(){
	int num,rev=0;
	cin>>num; //1234
	
	for(;num>0;num/=10){
		//body
		rev = rev*10 + num%10;//60 + 5 =65*10 + 4 = 654321
	}
	cout<<rev;
	
	return 0;
}
/*
write a c++ program that prints z to a with space between 
every character
z y 
*/



