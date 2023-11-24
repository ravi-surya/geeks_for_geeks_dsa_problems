#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    int smaller=0;
	    int greater=0;
	    vector<int>res;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>x)
	        {
	            smaller++;
	        }
	        else if(arr[i]==x)
	        {
	            greater++,smaller++;
	        }
	        else{
	            greater++;
	        }
	        
	    }
	    res.push_back(greater);
	    res.push_back(smaller);
        
	    return res;
	}
	
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
