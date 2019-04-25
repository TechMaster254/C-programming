#include <iostream>
using namespace std;

#define pi 3.1427

float areaofRectangle(int l, int w){
	cout<<"ENTER THE LENGTH\n";
	cin>>l;
	
	cout<<"ENTER THE WIDTH\n" ;
	cin>>w;
	
	float result = l * w;
	cout<<"the area is: " <<result ;
		
	return result;
}

float areaofTriangle(int b, int h){
	cout<<"ENTER THE base\n";
	cin>>b;
	
	cout<<"ENTER THE height\n" ;
	cin>>h;
	
	float result = (b * h)/2;
	cout<<"the area is: " <<result ;
		
	return result;
}

float volofSphere(int r){
	cout<<"ENTER THE radius\n";
	cin>>r;
	
	float result = 4/3 * pi * r * r * r;
	cout<<"VOLUME: " <<result ;
		
	return result;
}

int main(){
	float l,w,b,h,r,result;
	
	result = areaofRectangle(l,w);
	
	result = areaofTriangle(b, h) ;
	
	result = volofSphere(r)	;
	
	return 0;
}
