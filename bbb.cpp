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
        int ans=1;
        vector<int>v(n);

        for(long long int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(long long int i=0;i<n-1;i++)
        {
            if(abs(v[i+1]-v[i])==0 || abs(v[i+1]-v[i])==1 )
            {
               ans=0; 
               break;
            }
        }
        if(n==2 && abs(v[1]-v[0])>1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
        
    }
}