#include<iostream>
using namespace std;

string convertToBinary(int num)
{
	
	int temp = num;
	string ans = "";
	string rev = "";

	while(temp != 0)
	{
	
		int temp1 = temp % 2;
		temp =  temp / 2;
		ans += to_string(temp1);
	
	}

	int len = ans.length();

	for(int i=0;i<len;i++)
		rev += ans[len - i - 1];


	return rev;

}


int countConsec(string ans)
{

	int count = 0;

	int tempCount = 0;

	int flag = 0;
	int tflag = 0;

	for(int i=0;i< ans.length();i++)
	{
	
		if(flag == 1 && ans[i] == '1') {
			tempCount += 1;
			if(i == ans.length()-1){
			
				if(tempCount > count)
					count = tempCount;
			}
				
		}
		else if(flag == 1 && ans[i] == '0') {
			flag = 0;

			if(tempCount > count)
				count = tempCount;
			tempCount = 0;
		}	


		if(flag == 0 && ans[i] == '1'){
			flag = 1;
			tflag = 1;
			tempCount += 1;
		}
	
	}

	if(tflag == 1 && count == 0)
		count = 1;

	return count;
	

}


int main()
{

	int num;

	cin >> num;

	string ans = convertToBinary(num);
	cout << countConsec(ans) << endl;
}
