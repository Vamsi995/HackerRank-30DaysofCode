#include<iostream>
using namespace std;

class Person {

	public:
	 int age;

	public:
	Person () {};
	 Person (int initialAge);
 	
	 void yearPasses(); 
	 void amIOld();
	

};


 Person::Person (int initialAge) {
	 
		 if(initialAge < 0) {
		 	this->age = 0;
			cout << "Age is not valid, setting age to 0." << endl;
		 }
		 else
		 	this->age = initialAge;
	 }


void Person::yearPasses() {
		age += 1;
}

void Person:: amIOld() {
	 	
		 if(age < 13)
			 cout << "You are young." << endl;
		 else
			 if(age < 18)
				 cout << "You are a teenager."<< endl;
			 else
				 cout << "You are old." << endl;
}





int main()
{

	int num;
	int val;

	cin >> num;

	Person parr[num];

	for(int i = 0; i<num; i++) {
	
		cin >> val;
		parr[i] = Person(val);
		parr[i].amIOld();
		for(int j = 0; j< 3 ;j++) {
			parr[i].yearPasses();
		}
		parr[i].amIOld();

	}

}
