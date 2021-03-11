#include<iostream>

using namespace std;


int main(){
	int note;
	cout<<"Enter note amount: ";
	cin>>note;
	
	if(note>=100){//125
		cout<<"100$ : "<<note/100;
		note = note - note/100*100;
	}else{
		cout<<"100$ : "<<0;
	}
	
	if(note>=50){
		cout<<"50$ : "<<note/50;
		note = note - note/50*50;
	}
	
	if(note>=50){
		cout<<"20$ : "<<note/20;
		note = note - note/20*20;
	}
	if(note>=10){
		cout<<"10$ : "<<note/10;
		note = note - note/10*10;
	}
	if(note>=5){
		cout<<"5$ : "<<note/5;
		note = note - note/5*5;
	}
	if(note>=2){
		cout<<"2$ : "<<note/2;
		note = note - note/2*2;
	}
	if(note==1){
		cout<<"1$ : "<<note;
	}
	
	return 0;
}
