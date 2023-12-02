
#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
public:
    string getBinaryRep(int N)
    {
        string ans;
        for(int i=29;i>=0;i--){
            int p = (N>>i)&1;
            ans.push_back('0'+p);
        }
        
        return ans;
    
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
