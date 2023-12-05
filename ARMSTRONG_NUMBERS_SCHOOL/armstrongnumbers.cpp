
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum=0;
        int N=n;
        while(n>0)
        {
            int num=n%10;
            sum+=num*num*num;
            n=n/10;
            
        }
        if(sum==N)
        {
            return "Yes";
        }
        return "No";
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

