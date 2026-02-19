#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m;
        cin>>m;
        string a,b;
        cin>>a>>b;
        string s1,s2;
        for(int i=0;i<m;i++)
        {
            if(b[i]=='D')
            {
                s1.push_back(a[i]);
            }
            else if(b[i]=='V')
            {
                s2.push_back(a[i]);
            }
        }
        reverse(s2.begin(),s2.end());
        cout<<s2+s+s1<<endl;
    }
}