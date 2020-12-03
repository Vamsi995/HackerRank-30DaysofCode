#include<iostream>
#include<regex>
#include<algorithm>
using namespace std;


int main()
{

	int num;
	cin >> num;

	string a,b;
	regex mail("(.*)(@gmail.com)");

	vector<string> store;

	for(int i=0;i<num;i++){

		cin >> a >> b;
		
		if(a.length() <= 20 && b.length() <=50) {
			
			if(regex_match(b, mail))
				store.push_back(a);

		}


	}

	sort(store.begin(), store.end());

	for(int i=0;i<store.size();i++)
		cout << store[i] << endl;	


}
