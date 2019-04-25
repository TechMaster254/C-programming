#include <iostream>

using namespace std;


int sum(int num1, int num2){
	int results;
	cout<<"enter num1\n";
	cin>>num1;
	cout<<"enter num2\n";
	cin>>num2;
	results = num1 + num2;	
	cout<<"the answer is: "<<results;
	 

	return results;
}
int main(){
	int num1, num2, answer;

	answer = sum(num1, num2);
	return 0;
}
