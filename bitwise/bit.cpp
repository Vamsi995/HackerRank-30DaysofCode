#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

	int num;
	cin >> num;

	int a,b;
	int max = 0;

	for(int k=0;k<num;k++)
	{
		
		cin >> a >> b;
		max = 0;		

		for(int i=1;i<a;i++){
		
			for(int j=i+1;j<=a;j++) {

				int temp = i & j;
				
				if(temp < b && temp >= max)
					max = temp;
			}
		
		}

		cout << max << endl;

	}


}
