#include<iostream>

using namespace std;


//return type: void->hooson, int, string, chart, double, bool, 
int sum(int a, int b){
	int k = a+b;
	return k;
}

int sub(int a, int b){
	int k = a-b;
	return k;
}
int mul(int a, int b){
	int k = a*b;
	return k;
}/*
int div(int a, int b){
	int k = a/b;
	return k;
}*/
void printMenu(){
	cout<<"Welcome to my Calculator"<<endl;
	cout<<"1.Add\n2.Sub\n3.Mul\n4.div\n5.exit"<<endl;
	cout<<"Enter the number that you want to oparate:";
}



int main(){
	int choice=0;
	int x,y;
	
	while(choice!=5){
		int result;
		printMenu();
		cin>>choice;
		cout<<"Enter x and y :";
		cin>>x>>y;
		switch(choice){
			case 1:
				result = sum(x,y);
				cout<<"Your answer is "<<result<<endl;
				break;
			case 2:
				cout<<"Your answer is "<<sub(x,y)<<endl;
				break;
			case 3:
				cout<<"Your answer is "<<mul(x,y)<<endl;
				break;
			/*case 4:
				cout<<"Your answer is "<<div(x,y)<<endl;
				break;*/
			case 5:
				cout<<"Thank you for using my calc program!\nBye bye"<<endl;
				break;
			default:
				cout<<"You have entered wrong input please try 1-5 "<<endl;
				break;
		}
	}
	
	
	return 0;
}


