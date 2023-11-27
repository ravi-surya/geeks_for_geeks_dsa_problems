#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	

	string removeCharacters(string S) 
	{
	   
	    string res="";
	    for(int i=0;i<S.length();i++)
	    {
	        
	        if(S[i]>=48 && S[i]<=57)
	        {
	            res+=S[i];
	            
	        }
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
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}
