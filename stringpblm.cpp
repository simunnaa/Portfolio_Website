#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string x;
        string y;
        string z;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='T')
            {
               x.push_back(s[i]);
            }
            else
            {
                y.push_back(s[i]);
            }
        }
        z=x+y;
        cout<<z<<endl;
    }
}