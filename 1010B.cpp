#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        long long int x=0;
        for(int i=0;i<n-1;i=i+2)
        {
            x+=max(v[i],v[i+1]);
        }
        if(n%2==0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<x+v[n-1]<<endl;
        }
    }
}