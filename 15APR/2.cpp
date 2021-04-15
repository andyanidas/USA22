#include<iostream>

using namespace std;
//recursive function

//return type: void->hooson, int, string, chart, double, bool, 
string CarFacotry(){
	cout<<"Your car is in proceeding"<<endl;
	
	return "You car has fixed";
}


int main(){
	string result;
	result = CarFacotry();
	cout<<result;
	
	return 0;
}


