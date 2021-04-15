#include<iostream>

using namespace std;
//recursive function

//return type: void->hooson, int, string, chart, double, bool, 
//prototype
string test(string);


int main(){
	string l;
	
	cout<<"Enter a word: ";
	cin>>l;
	l = test(l);
	cout<<l;
	
	return 0;
}

string test(string k){
	k = k +"-" + k;
	return k;
}

