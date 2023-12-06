//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    
    int find_median(vector<int> v)
    {
        
        sort(v.begin(),v.end());

        int ans ;
        
        if(v.size()%2!=0)
            {
            ans = v[v.size() / 2];
            }
        else
        {
            ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
        }
        return ans;
    }
};


int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

