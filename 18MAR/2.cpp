#include<iostream>

using namespace std;

int main(){
	int b,e,ans=1;
	cout<<"Base :";
	cin>>b;	//2
	cout<<"Exponent :";
	cin>>e;	//5
	
	for(int i=0;i<e;i++){
		ans = ans*b;
	}
	cout<<b<<"^"<<e<<"="<<ans;
	
	return 0;
}
