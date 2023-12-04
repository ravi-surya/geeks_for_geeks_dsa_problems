
#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string isVowel(char c){
        vector<char> answer = {'a','e','i','o','u','A','E','I','O','U'};
        for (int i = 0; i < answer.size(); i++)
        {
            if (c == answer[i])
            
            return "YES";
        }
        return "NO";
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
