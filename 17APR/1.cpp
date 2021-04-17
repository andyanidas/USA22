//1. return type VOID + ALL OTHER
//2. Prototype (telling to computer that i have a func down there)

#include<iostream>

using namespace std;
void BloombergNews(string);

int main(){
	BloombergNews("Hello World");
	return 0;
}

//broadcasting type functions 
//usually doesnt require 
//any return type
void BloombergNews(string str){
	if(str == "\n") return;
	cout<<"Todays news is "<<str;
}
