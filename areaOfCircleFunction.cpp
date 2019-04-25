#include <iostream>

#define pi 3.1427

using namespace std;

float area(float r){
	cout<<"ENTER THE RADIUS";
	cin>>r;
	
	float areaofCircle = r * r * pi;
	
	cout<<"area is: " <<areaofCircle;
	
	return areaofCircle;
}

int main(){
	float r, result; 
	
	result = area(r);
	
	return 0;
}
