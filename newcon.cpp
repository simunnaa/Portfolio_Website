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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i]*k;
            k--;
        }
        cout<<sum<<endl;
    }
}