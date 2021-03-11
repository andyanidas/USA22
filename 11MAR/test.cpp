#include<iostream>

using namespace std;


int main(){
	double CP;
	double SP;
	double Profit;

	
	cout<<"Enter CP";
	cin>>CP;
	cout<<"Enter SP";
	cin>>SP;
	
	
	Profit=CP-SP;
	
	if(SP>CP){
		Profit=CP-SP;
		cout<<"it is a Profit "<<Profit;
	}else if(SP<CP){
	
		cout<<"it is a loss";	
	}else
		cout<<"no profit, no loss";
	
	
	return 0;
}
