
#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    int gcd(int a, int b) 
	{ 
	    if(b==0)
	    {
	     return a;   
	    }
	    else
	    {
	        return gcd(b,a%b);
	    }
	      
	} 		
};

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
