
#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int sum=0;
        
        int n=N;
        while(n>0)
        {
            int temp=n%10;
            sum+=temp;
            n/=10;
        }
        return sum;
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
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
