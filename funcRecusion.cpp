#include <iostream>

using namespace std;

int find_factorial(int num);

int main(){
	int num, fact;
	cout<<"Enter any integer number: \n";
	cin>>num;
	
	fact = find_factorial(num)
	cout<<"factorial of: " << num << "is" << fact;
	
	
	return 0;	
}

int find_factorial(int num){
	if(n==0)
		return(1);
	return(n*find_factorial(n-1));
}
