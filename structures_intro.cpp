#include <iostream>
#include <string.h>

using namespace std;

/*
 *Declaring structure variable separately.
 */

//struct Student{
//	char name[25];
//	int age;
//	char gender;
//};//end of structure
//
//int main(){
//	struct Student s1;
//	s1.age = 18;
//	strcpy(s1.name, "MARY JOHN");
//	cout<<"NAME OF STUDENT 1: "<<s1.name <<endl;
//	cout<<"AGE OF STUDENT: "<<s1.age <<endl;	
//	return 0;
//}

/* declaring structure variable with structure definition 
 *
 */

struct Student{
	char name[25];
	int age;
	char gender;
}s1;

int main(){
	s1.age = 18;
	strcpy(s1.name, "MARY JOHN");
	cout<<"NAME OF STUDENT 1: "<<s1.name <<endl;
	cout<<"AGE OF STUDENT: "<<s1.age <<endl;	
	return 0;
}
