
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reciprocalString(string s)
    {
        
        int diff=0;
        int num=25;
        int multi=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                s[i]=' ';
            }
            else if(islower(s[i]))
            {
                multi=num-((s[i]-'a')*2);
                s[i]=s[i]+multi;
                
            }
            else
            {
                multi=num-((s[i]-'A')*2);
                s[i]=s[i]+multi;
                
            }
        }
        return s;
    }  
};

int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
