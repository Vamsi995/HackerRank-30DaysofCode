#include<iostream>
#include<map>
using namespace std;


int main()
{

	map<string, string> dict;


	int num;
	string name, number;

	cin >> num;

	for(int i=0;i<num;i++) {
	
		cin >> name >> number;
		dict[name] = number;
	
	}

	string line;
	while(getline(cin, line)) {
		
		if(line.length() < 1) {
			continue;
		}

		auto it = dict.find(line);
		
		if(it == dict.end())
			cout << "Not found" << endl;
		else
			cout << it->first << "=" << it->second << endl;
	}
	

}
