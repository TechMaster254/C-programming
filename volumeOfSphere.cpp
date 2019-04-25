#include <iostream>
using namespace std;

int main(){
	float radius, vol;
	const float pi = 3.142;
	
	cout<<"ENTER THE RADIUS" <<endl;
	cin>>radius;
	
	vol = pi * radius * radius * radius * 4/3;
	
	cout<<"THE VOLUME IS: " <<vol;	
}
