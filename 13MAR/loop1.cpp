#include<iostream>

using namespace std;

int main(){
	int n;
	
	cout<<"Enter n : ";
	cin>>n; // 10
	
	for(int i = n; i>0 ; i--){
		cout<<i<<" ";// 10 9 8 7 6 5 4 3 2 1
	}
	
	return 0;
}
