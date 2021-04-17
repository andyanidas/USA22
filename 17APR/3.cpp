#include<iostream>

using namespace std;
//prototype
void StartMyProg();
void printWelcome();
void squarePath();
void sqrPath1(int);


int main(){
	StartMyProg();
	return 0;
}

void StartMyProg(){
	printWelcome();
	int choice=-1;
	while(choice != 0){
		cout<<"1 to SQUARE \n2 to Triangle\n0 to Exit\nEnter your choice:";
		cin>>choice;
		if(choice==0)break;
		if(choice==1){
			squarePath();
		}
		if(choice == 2){
			//triAnglePath();
		}
	}
	cout<<"Thank you for using my program!\nByeBye!";
}

void printWelcome(){
	cout<<"Hello Welcome to my shape pattern program"<<endl;
}

void squarePath(){
	int choice,SIZE;
	cout<<"Enter path num (1-10) :";
	cin>>choice;
	cout<<"Enter Size:";
	cin>>SIZE;
	switch(choice){
		case 1:
			sqrPath1(SIZE);
			break;
		case 2:
			//sqrPath2(SIZE);
			break;
		case 3:
			//sqrPath3(SIZE);
			break;
		default:
			cout<<"Wrong choice!";
	}
}

void sqrPath1(int s){
	for(int i = 0; i<s; i++){
		for(int j = 0; j<s; j++){
			cout<<"1";
		}
		cout<<endl;
	}
}
