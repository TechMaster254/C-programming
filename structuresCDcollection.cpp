#include <iostream>
#include <string.h>

using namespace std;

struct cdCollection{
	char title[25];
	char artist[20];
	int numSong;
	float price;
	char dateBought[9];		
}cd1;

int main(){
	strcpy(cd1.title, "ROCK MUSIC");
	strcpy(cd1.artist, "SAM");
	cd1.numSong=12;
	cd1.price=11.95;
	strcpy(cd1.dateBought, "02/13/2019");
	cout<<"TITLE:"<<cd1.title <<endl;
	cout<<"ARTIST:" <<cd1.artist <<endl;
	cout<<"SONGS: "<<cd1.numSong <<endl;
	cout<<"PRICE: "<<cd1.price <<endl;
	cout<<"DATE BOUGHT: "<<cd1.dateBought <<endl;
	
	return 0;
	}
