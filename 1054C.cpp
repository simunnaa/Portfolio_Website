#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            a.push_back(i);
        }
        int cnt=0;
        int d=0;
        for(int i=0;i<n;i++)
        {
            if(k==v[i])
            {
                cnt++;
            }
            if(a[i]!=v[i])
            {
                d++;
            }
        }
        if(cnt>0)
        {
            cout<<cnt+d-2<<endl;
        }
        else
        {
         cout<<d-1<<endl;
        }
        
    }
}