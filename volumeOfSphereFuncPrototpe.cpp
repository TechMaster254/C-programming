#include <iostream>

using namespace std;

#define pi 3.142

float volSphere(float r);

int main(){
	int r, result;
	
	result = volSphere(r);
	
	return 0;
}

float volSphere(float r){
	cout<<"ENTER THE RADIUS" <<endl;
	cin>>r;
	
	float vol = pi * r * r * r * 4/3;
	
	cout<<"THE VOLUME IS: " <<vol;	
	
	return vol; 
}
