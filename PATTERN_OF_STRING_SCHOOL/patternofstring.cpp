#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    
	    vector<string>res;
	    int k=S.length();
	    while(k!=0)
	    {   
	        string r="";
	        for(int i=0;i<k;i++)
	        {
	            r+=S[i];
	        }
	        k--;
	        res.push_back(r);
	    }
	    return res;
	    
	}

};

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}