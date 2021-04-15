#include<iostream>

using namespace std;
//recursive function

//return type: void->hooson, int, string, chart, double, bool, 
//prototype
int cube(int);
double curc(double);

int main(){
	int num;
	cin>>num;
	cout<<cube(num)<<endl;
	cout<<curc(10);
	
	return 0;
}


int cube(int a){
	int result;
	result = a*a*a;
	return result;
}

double curc(double d){
	return 2*3.14*d;
}




