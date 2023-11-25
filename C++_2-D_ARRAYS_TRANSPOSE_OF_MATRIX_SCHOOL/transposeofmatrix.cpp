
#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}

vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    vector<vector<int>> res;
    vector<int>res1;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<n;j++)
        {
            res1.push_back(a[j][i]);
        }
        res.push_back(res1);
        res1.clear();
    }
    return res;
    
}