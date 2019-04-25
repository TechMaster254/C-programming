#include <iostream>

using namespace std;
int sum(int l, int w);

int main(){
	int l, w, results;
	
	results = sum(l, w);
	
	return 0;
}

int sum(int l, int w){
	cout<<"ENTER NUM 1\n";
	cin>>l;
	
	cout<<"ENTER NUM 1\n";
	cin>>w;
	
	int results = l + w;
	
	cout<<"the answer is: \n" <<results;
	
	return results;
}
