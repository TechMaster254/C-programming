#include <iostream>

using namespace std;

float NumAverage(float num1, float num2, float num3){
	cout<<"ENTER NUM 1\n";
	cin>>num1;
	
	cout<<"ENTER NUM 1\n";
	cin>>num2;
	
	cout<<"ENTER NUM 1\n";
	cin>>num2;
	
	float sum = num1 + num2 + num3;
	float average = sum / 3;
	
	cout<<"the average is: " <<average;
	
	return average; 
}

int main(){
	float num1, num2, num3;
		
	float ave = NumAverage(num1, num2, num3);
	return 0;
}
