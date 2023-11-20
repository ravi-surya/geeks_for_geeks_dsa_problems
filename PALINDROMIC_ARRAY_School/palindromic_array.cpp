#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int num)
    {
        int original=num;
        int reversed=0;
        while(num!=0)
        {
            int last_digit=num%10;
            reversed=(reversed*10)+last_digit;
            num=num/10;
        }
        if(original==reversed)
        {
            return true;
        }
        
        return false;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    if(isPalindrome(a[i])==false)
    	    {
    	        return false;
    	    }
    	}
    	return true;
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution solution;
        cout<<solution.PalinArray(a,n)<<endl;

    }

}