#include<iostream>

using namespace std;

//ogogdson temdegt alphabet mon eshiig shalga
//temdegt >=a and <=z or >=A and <=Z
int main(){
	char ch;
	char z='z';
	

	cout<<"Input ch : ";
	cin>>ch;
	
	
	if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ){
		cout<<ch<<" is an alphabet";
	}else{
		cout<<ch<<" is not an alphabet!";
	}
	
	
	return 0;
}
