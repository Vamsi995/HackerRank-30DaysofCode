#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Difference {

	vector<int> elements;

	public:
		int maximumDifference;
	
	Difference(vector<int> a){
		this->elements = a;
	}


	void computeDifference() {
		
		sort(elements.begin(), elements.end(), greater<int>());
		
		this->maximumDifference = elements[0] - elements[elements.size() - 1];	
		
	}

};


int main()
{
	 int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;

}
