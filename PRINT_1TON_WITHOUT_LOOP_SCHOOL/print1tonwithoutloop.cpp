
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    void printTillN(int N)
    {
        
        if(N>0)
        {
            printTillN(N-1);
            cout<< N<<" ";
        }
        return;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printTillN(N);
        cout<<endl;
    }
    return 0;
}
