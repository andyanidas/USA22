#include<iostream>

using namespace std;


int main(){
	
	//true or false // 1 or 0
	bool check = 3 != 5; 
	//cout<<check;
	string username = "andy";
	string password = "123456";
	
	
	if(username == "andy"){
		if(password == "123456"){
			cout<<"access granted!";
		}else{
			cout<<"access denied!";
		}	
	}else{
		cout<<"we could not varify your account!";
	}
	
	
	return 0;
}
