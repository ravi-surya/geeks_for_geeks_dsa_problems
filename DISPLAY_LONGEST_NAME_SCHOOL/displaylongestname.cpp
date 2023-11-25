
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string longest(string names[], int n)
    {
        int max=0;
        string res="";
        for(int i=0;i<n;i++)
        {
            if(names[i].length()>max)
            {
                max=names[i].length();
                res=names[i];
            }
        }
        return res;
        
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

