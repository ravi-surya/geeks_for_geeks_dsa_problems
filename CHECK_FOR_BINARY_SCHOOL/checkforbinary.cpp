
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

bool isBinary(string str)
{
 
   for(long i=0;i<str.length();i++)
   {
       if(str[i]!='1' && str[i]!='0')
       {
           return false;
       }
   }
   return true;
}