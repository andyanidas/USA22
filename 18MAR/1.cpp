#include<iostream>

using namespace std;

int main(){
	int num,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,eg=0,ni=0,ze=0;
	cin>>num; // 16516
	
	for(; num>0 ; num/=10){
		
		if(num%10 == 1){
			on++;
		}else if(num%10==2){
			tw++;
		}else if(num%10==3){
			th++;
		}else if(num%10==4){
			fo++;
		}else if(num%10==5){
			fi++;
		}else if(num%10==6){
			si++;
		}else if(num%10==7){
			se++;
		}else if(num%10==8){
			eg++;
		}else if(num%10==9){
			ni++;
		}else{
			ze++;
		}
	}
	cout<<"Frequency of 0 = "<<ze<<endl;
	cout<<"Frequency of 1 = "<<on<<endl;
	cout<<"Frequency of 2 = "<<tw<<endl;
	cout<<"Frequency of 3 = "<<th<<endl;
	cout<<"Frequency of 4 = "<<fo<<endl;
	cout<<"Frequency of 5 = "<<fi<<endl;
	cout<<"Frequency of 6 = "<<si<<endl;
	cout<<"Frequency of 7 = "<<se<<endl;
	cout<<"Frequency of 8 = "<<eg<<endl;
	cout<<"Frequency of 9 = "<<ni<<endl;
	
	return 0;
}
