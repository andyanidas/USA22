#include<iostream>

using namespace std;

int main(){
	char ch;
	cout<<"Input ch : ";
	cin>>ch;
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){ 
		cout<<ch<<" is vowel";
	}else{
		cout<<ch<<" is consonant";
	}
	
	
	return 0;
}
