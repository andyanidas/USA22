#include<iostream>

using namespace std;


int main(){
	
	int a,b;
	double x,y,z;
	
	
	cout<<"Enter Weight of item 1: ";
	cin>>a;
	cout<<endl;
	 
	cout<<"Quantity of Item 1: ";
	cin>>x;
	cout<<endl;
	
	cout<<"Enter Weight of item 2: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Quantity of Item 2: ";
	cin>>y;
	cout<<endl;
	
	z = ((a*x)+(b*y))/(x+y);
	
	cout<<"Average Value: "<<z;
	
	
	
		
	return 0;	
}
