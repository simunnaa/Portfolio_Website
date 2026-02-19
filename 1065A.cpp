#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,x,sum=0;
        cin>>n>>s>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        int y=s-sum;
        if(y%x==0 && sum<=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}