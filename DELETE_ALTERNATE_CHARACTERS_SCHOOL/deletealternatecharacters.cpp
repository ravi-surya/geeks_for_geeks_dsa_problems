
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string delAlternate(string S) {
        // code here
        int n=S.length();
        string res="";
        for(int i=0;i<n;i+=2)
        {
            res+=S[i];
            
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}
