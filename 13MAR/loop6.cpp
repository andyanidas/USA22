#include<iostream>

using namespace std;

int main(){
	double num,sum=0,av;
	
	for(int i=1 ; i<=10 ; i++){
		cout<<"Enter num"<<i<<": ";
		cin>>num;
		sum+=num; //sum = sum + num;
	}
	
	av = sum/10;
	
	cout<<"Sum = "<<sum<<endl;
	cout<<"Av = "<<av; 
	
	
	return 0;
}
