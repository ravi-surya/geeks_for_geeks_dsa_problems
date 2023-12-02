
#include<bits/stdc++.h>
using namespace std;
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
         for ( char& c : S ) c ^= 1;
    return S;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}
