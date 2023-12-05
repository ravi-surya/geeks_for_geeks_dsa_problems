#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
		long long int find_fact(int n)
		{
		    // Code here.
		    if(n==1)
		    {
		        return 1;
		    }
		    else{
		        return n*find_fact(n-1);
		    }
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
    	long long int ans = ob.find_fact(n);
    	cout << ans <<"\n";
    }
	return 0;
}
