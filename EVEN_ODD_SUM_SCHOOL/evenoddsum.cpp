
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> EvenOddSum(int n, int Arr[]) {
        // code here
        vector<int>res;
        int o=0;
        int e=0;
        
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
             o+=Arr[i];   
            }
            else
            {
                e+=Arr[i];
                
            }
            
        }
        res.push_back(o);
        res.push_back(e);
        return res;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
