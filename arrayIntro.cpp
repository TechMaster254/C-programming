#include <iostream>

using namespace std;

int main(){
	
	int arrayName[5];
	arrayName[0]=10;
	arrayName[1]=20;
	arrayName[2]=30;
	arrayName[3]=50;
	
	for(int x=0; x<=4; x++){
		cout<<"VALUE IN ARRAY AT: " <<arrayName[x] <<endl;
		
	}

//	cout<<"VALUE IN ARRAY AT: " <<arrayName[0] <<endl;
//	cout<<"VALUE IN ARRAY AT :" <<arrayName[1] <<endl;
//	cout<<"VALUE IN ARRAY AT :" <<arrayName[2] <<endl;
//	cout<<"VALUE IN ARRAY AT :" <<arrayName[3] <<endl;
//	cout<<"VALUE IN ARRAY AT :" <<arrayName[4] <<endl;
//	cout<<"VALUE IN ARRAY AT :" <<arrayName[5] <<endl;
	
	return 0;
}
