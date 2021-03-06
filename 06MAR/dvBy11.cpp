#include<iostream>

using namespace std;


//number 5 huvaagdana 11 huvaagdana
// 2 uuland n huvaagdahgui
// zovhon 5 d huvaagdana
// zovhon 11d huvaagdana
// 2uuland n huvaagdana done
int main(){
	int num;
	
	cout<<"Input number : ";
	cin>>num;
	
	if(num%5==0 && num%11==0){
		cout<<"number is divisible by both 5 and 11"<<endl;
	}else if(num%5==0){
		cout<<"number is divisible by only 5"<<endl;
	}else if(num%11==0){
		cout<<"number is divisible by only 11"<<endl;
	}else{
		cout<<"number is not divisible by any of its";
	}
	
	
	return 0;	
	
}
