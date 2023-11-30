
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string toLower(string S) {
        // code here
        for(int i=0;i<S.length();i++)
        {
            if(isupper(S[i]))
            {
                S[i]=S[i]+32;
            }
        }
        return S;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}
