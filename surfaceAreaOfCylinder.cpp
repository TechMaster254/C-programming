/*
 *Program to calculate the surface are of a CYLINDER.
 *
 */
#include <iostream>
using namespace std;

#define pi 3.1427;

int main() {
	float radius, diameter, height;
	
	float surfaceAreaOpen, surfaceAreaClosed;
		
	cout<< "ENTER THE RADIUS OF THE CYLINDER: " <<endl;
	cin>>radius;
	
	cout<< "ENTER THE HEIGHT OF THE CYLINDER: " <<endl;
	cin>>height;
	
	diameter = 2 * radius;
	
    float areaofCircle =radius * radius * pi;
	
	float areaofCurvedSurface =diameter * height * pi;
	
	surfaceAreaOpen =areaofCurvedSurface + areaofCircle;
	
	surfaceAreaClosed =(2 * areaofCircle) + areaofCurvedSurface;
	
	cout<< "SURFACE AREA OF AN OPEN CYLINDER IS: "  <<surfaceAreaOpen <<endl; 
	
	cout<< "SURFACE AREA OF A CLOSED CYLINDER IS: " <<surfaceAreaClosed;
	
	return 0;
	
}
