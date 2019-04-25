#include <iostream>

using namespace std;
 int main(){
 	int first, second, *p, *q, sum;
 	
 	cout<<"ENTER TWO INTERGERS TO ADD\n";
 	cin>>first>>second;
 	
 	p = &first; // p contains Memory Address of first
 	q = &second; // q contains Memory Address of second
 	
 	sum = *p + *q;
 	cout<<"SUM OF ENTERED NUMBER IS: " <<sum;
 	 	
 	return 0;
 }
