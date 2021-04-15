#include<iostream>

using namespace std;
//recursive function

//return type: void->hooson, int, string, chart, double, bool, 
void printHello(){
	cout<<"Hello World"<<endl;
	return;
}
void printHi(){
	cout<<"Hi"<<endl;
}

int main(){
	
	printHello();
	printHello();
	printHello();
	printHello();
	printHello();
	
	printHi();
	
	return 0;
}


