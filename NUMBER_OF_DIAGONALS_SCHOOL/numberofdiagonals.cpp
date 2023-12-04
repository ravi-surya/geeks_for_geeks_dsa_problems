
#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	long long diagonals(int n)
	{
	
       long long ans = (long long)n;
		return (ans - 1) * ans / 2 - ans;
	}
};

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
	    Solution ob;
	    cout << ob.diagonals(n) << "\n";
   
    }
    return 0;
}
