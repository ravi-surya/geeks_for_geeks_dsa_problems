
#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    // Code here
		    int sum = (n*(n+1))/2;
            int even = (n/2)*(n/2+1);
            return {sum-even, even};
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
