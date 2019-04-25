#include <iostream>
using namespace std;

#define pi 3.1428

int main(){
	double radius, area;
	
	cout<<"ENTER THE RADIUS OF THE CIRCLE" <<endl;
	cin>>radius;
	
	area = radius * radius * pi;
	
	cout<<"THE ARE OF THE CIRCLE IS: " <<area;
	
	return 0;
	
}
