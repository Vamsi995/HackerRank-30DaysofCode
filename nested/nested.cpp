#include<iostream>
using namespace std;


int main()
{

	int cd,cm,cy;
	int ed,em,ey;
	int fine;

	cin >> cd >> cm >> cy;
	cin >> ed >> em >> ey;

	if(ey == cy) {
		
		if(cm > em) {
			fine = 500*(cm-em);
			cout << fine << endl;
			
		}
		else {	
			
			if(cd > ed)
			{
				fine = 15 * (cd - ed);
				cout << fine << endl;
			}
			else {
				fine = 0;
				cout << fine << endl;
			}
		
		}
	
	}
	else if(cy > ey) {
		fine = 10000;
		cout << fine << endl;
	}
	else {
		
		fine = 0;
		cout << fine << endl;
		

	}

}
