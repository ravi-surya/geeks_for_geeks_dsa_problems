
#include <bits/stdc++.h>
#include<string>
using namespace std;


class Solution {
  public:
    string triDownwards(string S) {
        
        string ans="";
        
        
        for(int i=0 ; i<S.length() ; i++)
        {
            for(int j=0 ; j<S.length() ; j++)
            {
                if(j<i)
                    ans+='.';      
                else
                    ans+=S[j];
            }
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}
