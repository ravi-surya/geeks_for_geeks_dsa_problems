
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	for(int i=1;i<s.length();i++)
        	{
        	    if(s[i]!=s[i-1])
        	    {
        	        return false;
        	    }
        	}
        	return true;
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
