#include <iostream>
#include <string>

using namespace std;

struct Apartment {
	string size;
	string color;
	int price;
	bool billedWater;
	bool billedElectricity;
	int Capacity;
	string OtherFacilities;
}house[4];

void structIntializer();

void housebySize();
void housebyPrice();

void selection(int n);

void mainMenu();



int main(){
	
	structIntializer();
		
	mainMenu();
	
	return 0;
}

void structIntializer(){
	
	house[0].size = "BEDSITTER";
	house[0].color = "WHITE";
	house[0].price = 1200000;
	house[0].billedWater = true;
	house[0].billedElectricity = true;
	house[0].Capacity = 1;
	
	house[1].size = "ONE BEDROOM";
	house[1].color = "WHITE";
	house[1].price = 2200000;
	house[1].billedWater = true;
	house[1].billedElectricity = true;
	house[1].Capacity = 2;
	
	house[2].size = "TW0 BEDROOM";
	house[2].color = "MIXED COLORS";
	house[2].price = 4200000;
	house[2].billedWater = true;
	house[2].billedElectricity = true;
	house[2].Capacity = 4;
	
	house[3].size = "THREE BEDROOM";
	house[3].color = "MIXED COLORS";
	house[3].price = 8200000;
	house[3].billedWater = true;
	house[3].billedElectricity = true;
	house[3].Capacity = 6;	
}

void housebySize(){
	int size;
	int n; 
	
	cout<<"SELECT THE NUMBR OF BEDROOMS" <<endl;
	cout<< "1. BEDSITTER" <<endl;
	cout<< "2. ONE BEDROOM" <<endl;
	cout<< "3. TWO BEDROOM" <<endl; 
	cout<< "4. THREE BEDROOM" <<endl <<endl;
	cin>>size;
	
	if(size == 1){
		n = 0;
		selection(n);
		
		mainMenu();
			

	} else if (size == 2){
		n = 1;
		selection(n) ;
		mainMenu();
		
	} else if (size == 3){
		n = 2;
		selection(n) ;
		mainMenu();
		
	} else if (size == 4){
		n = 3;
		selection(n) ;
		mainMenu();
	} else {
		cout <<"NO HOUSE FOUND" ;
		mainMenu();
	}
}

void housebyPrice(){
	int amt;
	int n; 
	
	cout<<"SELECT A PRICE THAT IS AFFORDABLE TO YOU " <<endl;
	cout<< "1. KSH 1,000,000 TO 2,500,000" <<endl;
	cout<< "2. KSH 2,500,000 TO 5,000,000" <<endl;
	cout<< "3. KSH 5,000,000 TO 10,000,000" <<endl <<endl;
	cin>>amt;
	
	if(amt == 1){
		n = 0;
		selection(n);
		selection(n++);
		mainMenu();
			
	} else if (amt == 2){
		n = 2;
		selection(n) ;
		mainMenu();
		
	} else if (amt == 3){
		n = 3;
		selection(n) ;
		mainMenu();
	} else {
		cout <<"SELECT A VALID PRICE RANGE" ;
		mainMenu();
	}
}

void selection(int n){
	cout << "A HOUSE WITH THE FOLLOWING SPECIFICATIONS HAS BEEN FOUND: " <<endl;
    cout << "BEDROOMS: " <<house[n].size <<endl;
    cout << "INTERIOR THEME:  " <<house[n].color <<endl;
    cout << "APARTMENT PRICE:  " <<house[n].price <<endl;
    cout << "WATER CONNECTIVITY: " <<house[n].billedWater <<endl;
    cout << "ELECTRICITY CONNECTIVITY: " <<house[n].billedElectricity <<endl;
    cout << "HOUSING CAPACITY: " <<house[n].Capacity <<endl <<endl <<endl;
}

void mainMenu(){
	int option;
	
	cout<<"PLEASE SELECT THE CRITERIA FOR SELECTING YOUR HOUSE" <<endl;
	cout<< "1. SIZE" <<endl;
	cout<< "2. PRICE" <<endl;
	cin>> option;
	
	if(option == 1){
		housebySize();
		
	} else if(option == 2){
		housebyPrice();
			
	} else{
		cout<<"PLEASE SELECT THE CORRECT OPTION" <<endl;
		mainMenu();
		
	}
}
