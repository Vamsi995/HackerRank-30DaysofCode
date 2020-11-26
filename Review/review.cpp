#include<iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for(int i=0;i<num;i++) {
		
		string a;
		cin >> a;
		string even = "";
		string odd = "";

		for(int j = 0;j<a.length();j++) {
		
			if(j % 2 == 0)
				even += a[j];
			else
				odd += a[j];
		
		}

		cout << even << " " << odd << endl;
	
	
	}

}
