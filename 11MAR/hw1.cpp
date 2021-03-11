#include<iostream>

using namespace std;

int main(){
	
	double unit, total = 0;
	cout<<"Enter unit amount: ";
	cin>>unit; //325
	
	if(unit>250){
		total = total + (unit-250)*1.5;//125.5
		unit = 250;
	}
	
	if(unit>150){
		total = total + (unit-150)*1.2;
		unit = 150;
	}
	
	if(unit>50){
		total = total + (unit-50)*0.75;
		unit = 50;
	}
	
	total = total + unit*0.5;
	total = total*1.2;
	cout<<"Total bill is "<<total;
	
	return 0;
}
