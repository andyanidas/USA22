#include<iostream>

using namespace std;

int main(){
	int year; //i am declaring year 
	cout<<"Input year : ";
	cin>>year;
	
	//4 leap 100 leap 200 300 400
	//leap year 2r sar 29 honogtoi
	if(year%4 != 0){
		cout<<"it is a common year";
	}else if(year%100 != 0){
		cout<<"its a leap year!";
	}else if(year%400 != 0){
		cout<<"its a common year";
	}else{
		cout<<"its a leap year!";
	}

	return 0;
}
