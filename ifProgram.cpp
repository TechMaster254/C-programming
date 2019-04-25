#include <iostream>

using namespace std;

int main(){
	
	int age;
	cout<<"ENTER AGE"<<endl;
	
	cin>>age;
	if(age >=18){
		cout<<" YOU ARE A MATURE GUY\n";
	}
	if(age < 18){
		cout<<"YOU ARE UNDERAGE\n";
	}
	
	/*
	IF ELSE
	*/
	
	if(age >=18){
		cout<<" YOU ARE A MATURE GUY\n";
	}else{
		cout<<"YOU ARE UNDERAGE\n";
	}
	/*
	IF--ELSE IF
	*/
	
	int day;
	cout<< "ENTER THE DAY"<<endl;
	cin>>day;
	
	if(day == 1){
		cout<<"MONDAY\n";
	} else if(day == 2){
		cout<<"TUESDAY\n";
	}else if(day == 3){
		cout<<"WEDNESDAY\n";
	} else if(day == 4){
		cout<<"THURSDAY\n";
	} else if(day == 5){
		cout<<"FRIDAY\n";
	} else if(day == 6){
		cout<<"SATURDAY\n";
	} else if (day == 7) {
		cout<<"SUNDAY\n";
	} else{
		cout<<"INVALID\n";
	}
	
	return 0;
	
}
