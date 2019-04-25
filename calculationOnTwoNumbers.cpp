#include <iostream>

using namespace std;

int main(){
	float num1, num2;
	float sum, average, product;
	
	cout<< "ENTER THE TWO NUMBERS \n" ;
	cin>>num1, num2;
	
	sum = num1 + num2;
	
	average = sum / 2;
	
	product = num1 * num2;
	
	cout<< "AVERAGE IS: " <<average;
	cout<< "SUM IS: " <<sum;
	cout<< "PRODUCT IS: " <<product;
	
	return 0;
}
