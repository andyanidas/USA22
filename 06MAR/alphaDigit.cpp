#include<iostream>

using namespace std;

int main(){
	char ch;
	int x = 8;
	ch = '8';
	
	cout<<"Input ch : ";
	cin>>ch;
	
	
	if(ch>='a' && ch<='z'){
		cout<<ch<<" is a lowercase alphabet";
	}else if(ch>='A' && ch<='Z'){
		cout<<ch<<" is an Uppercase alphabet";
	}else if(57>=ch && ch>=48){
		cout<<ch<<" is digit";
	
	}else{
		cout<<ch<<" is special character";
	}
	
	
	return 0;
}
