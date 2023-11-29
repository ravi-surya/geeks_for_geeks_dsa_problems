
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
        }
}

string convert(string s)
{
    int num=25;
    int multi=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            multi=num-((s[i]-'A')*2);//19
            s[i]=s[i]+multi;
        }
        else
        {
            multi=num-((s[i]-'a')*2);
            s[i]=s[i]+multi;
        }
    }
    return s;
}