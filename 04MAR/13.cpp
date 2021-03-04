#include<iostream>

using namespace std;

int main(){
	int days,day,week,year;
	cout<<"enter days: ";
	cin>>days; //500 1->year 19->week 3->days  // 250
	
	year = days/365; //1.614
	//500 - 365
	week = (days - 365*year)/7;
	day = days - 365*year - week*7;
	cout<<"Year: "<<year<<endl;
	cout<<"week: "<<week<<endl;
	cout<<"day: "<<day<<endl;
	return 0;
}
