#include<iostream>
#include<cmath>
#include<exception>
#include<stdexcept>
using namespace std;

class Power: public exception {

	const char *what() const throw() {
	
		return "n and p should be non-negative";
	
	}

};


class Calculator {

	public:	
	int power(int a, int b) {
	
		if(a < 0 || b < 0){
			throw Power();
		}
		else {
		
			return pow(a,b);
		
		}

	}


};



int main()
{

    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }



}
