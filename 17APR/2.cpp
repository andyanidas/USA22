//1. return type VOID + ALL OTHER

#include<iostream>

using namespace std;
int addNum(int, int);
char toUp(char);


int main(){
	int result;
	result = addNum(15, 99);
	//cout<<result;
	cout<<toUp(98);
	
	return 0;
}

int addNum(int a, int b){
	int c = a + b;
	return c;
}

char toUp(char ch){
	return ch -32;
}


