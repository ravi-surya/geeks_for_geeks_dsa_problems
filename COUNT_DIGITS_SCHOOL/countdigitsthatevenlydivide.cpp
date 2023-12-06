
#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int n=N;
        int temp=0;
        while(n!=0)
        {
            temp=n%10;
            n=n/10;
            if(temp==0)
            {
                continue;
            }
            if(N%temp==0)
            {
                count++;
            }
            
        }
        return count;
        
    
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
