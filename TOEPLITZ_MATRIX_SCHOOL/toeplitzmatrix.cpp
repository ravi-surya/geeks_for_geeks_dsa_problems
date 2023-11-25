
#include <iostream>
using namespace std;
#define MAX 1000 
bool isToepliz(int A[MAX][MAX],int N,int M);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[MAX][MAX];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		}

		cout<<isToepliz(a,n,m)<<endl;
	}
	return 0;
}

bool isToepliz(int A[MAX][MAX],int N,int M)
{
//Your code here
if(N==1||M==1)
{
    return true;
}


    for(int i=1;i<N;i++)
    {
        for(int j=1;j<M;j++)
        {
         if(A[i][j]!=A[i-1][j-1])  
         {
             return false;
         }
        }
    }
    return true;

}