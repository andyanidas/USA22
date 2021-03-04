#include<iostream>

using namespace std;

int main(){
	int x;
	cout<<"Input : ";
	cin>>x;
	
	
	if(x>100){
		cout<<x<<" is greater than 100";
	}else if(x>10){
		cout<<x<<" is greater than 10 but less than 100";
	}else if(x>0){
		cout<<x<<" is greater than 0 but less than 10";
	}else{
		cout<<x<<" is less than 0";
	}
	
	
	return 0;
}
