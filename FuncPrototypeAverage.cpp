#include <iostream>
using namespace std;

float average(int num1, int num2, int num3);

int main(){ 
	int num1, num2, num3, result;
	
	result=average(num1, num2, num3);
	return 0;
}

float average(int num1, int num2, int num3){
	cout<<"ENTER NUM 1\n";
	cin>>num1;
	
	cout<<"ENTER NUM 2\n";
	cin>>num2;
	
	cout<<"ENTER NUM 2\n";
	cin>>num3;
	
	int sum = num1 + num2 + num3;
	float results = sum / 3;
	
	cout<<"the average is: " <<results;
	
	return results; 
}
