#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int num;
	int val;
	int flag = 0;
	cin >> num;

	for(int i=0;i<num;i++) {
	
		cin >> val;
		flag = 0;
		
		if(val == 1){
			cout << "Not prime" << endl;
			continue;
		}


		for(int i=2;i<=sqrt(val);i++) {
			if(val % i == 0) {
				flag = 1;
				cout << "Not prime" << endl;
				break;
			}	
		}

		if(flag == 0){
			cout << "Prime" << endl;
		}

	}


}
