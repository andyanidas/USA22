#include<iostream>

using namespace std;
//recursive function

//return type: void->hooson, int, string, chart, double, bool, 
//prototype
char getLetterGrade(double);

int main(){
	double grade;
	char LetterGrade;
	cout<<"Please enter your gade: ";
	cin>>grade;
	LetterGrade = getLetterGrade(grade);
	cout<<"Your Letter grade is "<<LetterGrade;

	
	return 0;
}

char getLetterGrade(double d){
	if(d>=90){
		return 'A';
	}else if(d>=80){
		return 'B';
	}else if(d>=70){
		return 'C';
	}else if(d>=60){
		return 'D';
	}else{
		return 'F';
	}
}

bool checkPrime(int num){
	
}


