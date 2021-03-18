#include<iostream>

using namespace std;

int main(){
	//10 tooloy 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
	
	int num,sum = 0;
	cin>>num;
	
	//i = i - 1 <<-->> i--
	for(int i = 1; i<=num ; i++){
		if(i%2==0){
			sum = sum + i;
		}
	}
	
	
	cout<<sum;
	
	
	
	return 0;
}
