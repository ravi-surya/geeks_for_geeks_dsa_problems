#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int>res;
            int upper=0;
            int lower=0;
            int num=0;
            int spec=0;
            for(int i=0;i<s.length();i++)
            {
                if(isupper(s[i]))
                {
                    upper++;
                }
                else if(islower(s[i]))
                {
                    lower++;
                }
                else if(isdigit(s[i]))
                {
                    num++;
                }
                else
                {
                    spec++;
                }
            }
            res.push_back(upper);
            res.push_back(lower);
            res.push_back(num);
            res.push_back(spec);
            return res;
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
            
    }
}
/*
another function for the same thing 
vector <int> count (string s)
        {
            vector <int> res (4, 0);
            for (int i = 0; i < s.length (); ++i)
            {
                if (s[i] >= 'A' && s[i] <= 'Z') res[0]++;                
                else if (s[i] >= 'a' && s[i] <= 'z') res[1]++;
                else if (s[i] >= '0' && s[i] <= '9') res[2]++;
                else res[3]++;
            }
            return res;
        }
*/