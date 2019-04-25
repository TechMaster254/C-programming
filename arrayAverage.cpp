#include <iostream>

using namespace std;

int main(){
	
	int marks[10], i, n, sum=0, average;
	
	cout<<"ENTER N" <<endl;
	cin>>n;
		
	for(i=0; i<n; i++){
		cout<<"ENTER NUMBER: ", i+1;
		cin>>marks[i];
		sum+=marks[i];		
	}
	
	average = sum/n;
	
	cout<< "THE EVERAGE IS: " <<average;
	return 0;
}
