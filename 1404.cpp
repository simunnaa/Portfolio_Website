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
        int oc=0;
        int zc=0;
        int sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]==0)
            {
                zc++;
            }
            else if(v[i]==1)
            {
                oc++;
            }
        }
        int x=min(zc,oc);
        if(zc==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            if(zc>oc)
            {
                int y=(zc-oc)/2;
                cout<<sum+x+y<<endl;
            }
            else
            {
               cout<<sum+x<<endl;
            }
           
            
        }

    }
}