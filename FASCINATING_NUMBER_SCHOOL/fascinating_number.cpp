
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	bool fascinating(int n) {
	    string s = to_string(n) + to_string(n * 2) + to_string(n * 3);
	    vector<int> hash(10, 0);
	    for (char c : s) {
	        hash[c - '0']++;
	    }
	    for (int i = 1; i <= 9; i++) {
	        if (hash[i] != 1) {
	            return false;
	        }
	    }
	    return true;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
