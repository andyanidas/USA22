#include<iostream>

using namespace std;


int main(){
	char day;
	cout<<"Enter number 1-7: ";
	cin>>day;
	
	switch(day){
		case 'A':
			cout<<"VERY GOOD";
			break;
		case 2:
			cout<<"TU";
			break;
		case 3:
			cout<<"WE";
			break;
		default:
			cout<<"Inviled input";
			break;
	}
	
	
	return 0;
}
