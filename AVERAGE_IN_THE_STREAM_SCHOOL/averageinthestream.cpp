
#include <bits/stdc++.h>
using namespace std;



class Solution{
public:	
	 std::vector<float> streamAvg(int arr[], int n) {
        std::vector<float> res;
        float mean = 0;
        int a1[n];
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            a1[i] = sum;
        }
        
        for (int i = 0; i < n; i++) {
            mean =float(a1[i]) / (i + 1);
            res.push_back(mean);
        }
        
        return res;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}
