
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

vector<string> extractIntegerWords(string s)
{
    vector<string> res;
    int i=0,len=s.length(); 

    
    while(i<len)
    {
        
        if(s[i]<='9' && s[i]>='0')
        {
            string ans="";

            
            while(s[i]<='9' && s[i]>='0' && i<len)
            {
                ans+=s[i]; 
                i++;
            }
            
            res.push_back(ans);
            ans.clear();
        }
        i++;
    }
    return res;
}