#include <iostream>

using namespace std;

#define pi 3.142

float area(float r);

int main(){
	float r, matokeo;
	matokeo = area(r); 
	
	return 0;
} 

float area(float r){
	cout<<"enter radius \n";
	cin>>r;
	
	float jibu = pi * r * r;
	
	cout<<"the area is "<<jibu;
	return jibu;
}

