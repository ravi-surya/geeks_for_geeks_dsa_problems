
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int logicalOperation(int A,int B,int C,int D,int E,int F){
        // code here
        return (((!A)&&B) || (C && D) || (E && (!F)));
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C, D, E, F;
        cin >> A >> B >> C >> D >> E >> F;
        Solution ob;
        cout << ob.logicalOperation(A, B, C, D, E, F) << endl;
    }
    return 0;
}
