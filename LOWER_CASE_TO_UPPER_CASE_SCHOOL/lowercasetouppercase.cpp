
#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
string to_upper(string str){
    //code
    for(int i=0;i<str.length();i++)
    {
        str[i]=str[i]-32;
    }
    return str;
}