#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s;

	cin >> s;

	try{
	
		int a = stoi(s);

		cout << a << endl;
	}
	catch(invalid_argument& s) {
		cout << "Bad String" << endl;
	}


}
