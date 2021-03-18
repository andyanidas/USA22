#include<iostream>

using namespace std;

int main(){
	//10 tooloy 10 9 8 7 6 5 4 3 2 1
	
	int num;
	cin>>num;
	
	//i = i - 1 <<-->> i--
	for(int i = 1; i<=num ; i++){
		//body
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	
	
	
	return 0;
}
