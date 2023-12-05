
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
	int fullPrime(int N){
		for(int i=2;i*i<=N;i++)
			if(N%i==0)
				return 0;
		while(N){
			if(N%10!=2&&N%10!=3&&N%10!=5&&N%10!=7)
				return 0;
			N/=10;
		}    
		return 1;
	}
};
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
