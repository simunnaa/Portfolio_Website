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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int>a;
        for(int i=0;i<n-1;i=i+2)
        {
            int x = abs(v[i]-v[i+1]);
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int cnt=1;
        int mx=-1;
        int cnt1=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;
                mx=max(cnt,mx);
             }
             else
             {
                if(cnt==mx)
                {
                    cnt1=i-1;
                }
               cnt=1;
             }
        }
        cout<<a[cnt1]<<endl;
    }
}