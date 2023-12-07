
#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    // Code here
		    int squareNum = pow(n,2);
		    
		    
		    int lastdigit = n % 10; 
		    
		    int lastdigit1 = squareNum%10; 
		    
		    if(lastdigit==lastdigit1){
		        
		        return "Automorphic";
		    }
		    
		    return "Not Automorphic"  ;
}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}
