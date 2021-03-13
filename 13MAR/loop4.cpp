#include<iostream>

using namespace std;

int main(){
	int num,sum = 0;
	cout<<"Enter a number: ";
	cin>>num; //5-> 1 + 2 + 3 + 4 + 5 = 15 
	
	for(int i = 1; i<=num ; i++){
		sum = sum + i;
	}
	
	cout<<"Total = "<<sum;
	
	return 0;
}
