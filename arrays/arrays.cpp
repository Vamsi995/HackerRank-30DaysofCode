#include<iostream>
using namespace std;


int main()
{

	int num;

	cin >> num;

	int *arr = new int[num];

	for(int i=0;i<num;i++) {
		
		cin >> arr[i];		

	}

	for(int i=num-1;i>=1;i--) {
	
		cout << arr[i] << " ";
	}
	cout << arr[0] << endl;
}
