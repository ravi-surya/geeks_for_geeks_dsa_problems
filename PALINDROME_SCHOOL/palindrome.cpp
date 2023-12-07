
#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int sum=0;
		    int n1=n;
		    while(n)
		    {
		     int temp=n%10;
		     sum=10*sum+temp;
		     n=n/10;
		    }
		    if(sum==n1)
		    {
		        return "Yes";
		    }
		    return "No";
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
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
