#include<iostream>
using namespace std;

int main() 
{

	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	int a;
	double b;
	string c;

	scanf("%d\n %lf\n", &a, &b);
	getline(cin,c);

	printf("%d\n%.1lf\n%s\n",a+i,b+d,(s+c).c_str());
	

}
