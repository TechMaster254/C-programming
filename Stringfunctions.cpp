/*program to calculate the length of a string
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char a[100];
	int length;
	cout<<"ENTER A STRING TO CALLCULATE IT'S LENGTH" <<endl;
	gets(a);
	length = strlen (a);
	cout<<"LENGTH OF ENTERED STRING IS: " <<length;

	return 0;	
}

