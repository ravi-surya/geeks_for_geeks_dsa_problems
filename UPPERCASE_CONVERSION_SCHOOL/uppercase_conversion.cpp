
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}


string transform(string s)
{
    // code here
    s[0]=s[0]-32;
    for(int i=1;i<s.length();i++)
    {
        
       if(s[i] == ' '){
            s[i+1] = s[i+1] -32;
        }
    }
    return s;
    
}//toupper(variable) converts a CHARACTER TO UPPERCASE AND NOT STRING