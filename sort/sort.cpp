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


	int numOfSwaps = 0;
	

	for(int i=0; i < num; i++)
	{
	
		for(int j=0;j<num-1;j++){
		
			if(arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				numOfSwaps++;
			}
		
		}
	
	}

	cout << "Array is sorted in " << numOfSwaps << " swaps." << endl;
	cout << "First Element: " << arr[0] << endl;
	cout << "Last Element: " << arr[num - 1] << endl;

}
