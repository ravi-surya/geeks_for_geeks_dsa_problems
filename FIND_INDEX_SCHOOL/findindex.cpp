
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                res.push_back(i);
                break;
            }
            
        }
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]==key)
            {
                res.push_back(j);
                break;
            }
        }
        if(!res.empty())
        {
            return res;
        }
        
        return {-1,-1};
    }
  
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
