
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
        // calculate sum using formula sum = (n * (n + 1)) / 2
        long long sum = ((long long)n * (long long)(n + 1)) / 2;//we need to have to convert n to long long from int

        // return the sum
        return sum;
    }

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}
