
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string res="";
        for(int i=0;i<n;i++)
        {
            res+=arr[i];
        }
        return res;
    }
};

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        Solution ob;
        
        cout<<ob.chartostr(arr,n)<<endl;

    }
}
