#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	double d;
	int tip;
	int tax;


	cin >> d >> tip >> tax;

	d = d +  d * (tip/100.0) + d * (tax/100.0);

	cout << round(d) << endl;


}
