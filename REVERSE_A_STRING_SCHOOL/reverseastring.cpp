
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string revStr(string S) {
        
        string res="";
        for(int i=S.length()-1;i>=0;i--)
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
        cout << ob.revStr(S) << endl;
    }
    return 0;
}
