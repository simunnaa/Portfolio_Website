#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<long long>a;
        if(k%2!=0)
        {
            for(long long i=0;i<n;i++)
            {
                if(v[i]%2!=0)
                {
                    a.push_back(v[i]+k);
                }
                else
                {
                    a.push_back(v[i]);
                }
            }
        }
        else
        {
            for(long long i=0;i<n;i++)
            {
                a.push_back(v[i]*(k+1));
            }
        }
        for(long long i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}