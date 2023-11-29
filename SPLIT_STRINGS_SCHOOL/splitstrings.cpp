
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> splitString(string s)
    {
        // code here
        string one = "";
        string two = "";
        string three = "";
        vector<string> res;
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]) || islower(s[i]))
            {
                one += s[i];
            }
            else if (isdigit(s[i]))
            {
                two += s[i];
            }
            else
            {
                three += s[i];
            }
        }
        res.push_back(one);
        res.push_back(two);
        res.push_back(three);
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if (result[i] == "")
                cout << -1 << "\n";
            else
                cout << result[i] << "\n";
        }
    }
    return 0;
}
