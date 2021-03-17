#include<iostream>

using namespace std;

int main(){
	int num,fDig,lDig,temp,count=0,newNum=0,tenPower=1;
	cout<<"Input a num :";
	cin>>num; //123456 -> 623451
	temp = num;
	//finding Last digit
	lDig = num%10;
	//finding First digit
	for(; temp>10 ; temp = temp/10){
	}
	fDig = temp;
	
	//counting digit
	temp = num;
	for(; temp>0 ; temp = temp/10){
		count++; //increment
	}
	//creating my newNum
	//123456%100000 -> 23456
	for(int i = 1; i<count ; i++){
		tenPower = tenPower*10; //100000
	}
	newNum = num%tenPower; //6
	newNum = newNum + lDig*tenPower; //623456
	newNum = newNum/10;	//62345
	newNum = newNum*10;	//623450
	newNum = newNum + fDig;//623451
	
	cout<<newNum;
	
	return 0;
}
