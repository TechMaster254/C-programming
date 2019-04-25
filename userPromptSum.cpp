// program to allow the user to input a two values
// and calculate their sum

#include <iostream>
using namespace std;
int main(){
	int num1, num2, answer;
	cout<<"ENTER THE FIRST NUMBERS"<<endl;	//endl is used to create a new line
	cin>> num1;
	cout<<"ENTER THE SECOND NUMBER"<<endl;
	cin>> num2;
	
	answer = num1 + num2;
	
	cout<<"THE SUM OF THE TWO NUMBERS IS: \n"<<answer;
	
	cout<<"THE SUM OF THE TWO NUMBERS IS: "<<num1 + num2;
	
	return 0;
}
