#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int>ab;
        int z=0;
        
            for(int j=n-1;j>=0;j--)
            {
                z=max(max(a[j],b[j]),z);
                ab.push_back(z);
            }
            reverse(ab.begin(),ab.end());

            vector<long long> pref(n + 1, 0);
        for(int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + ab[i];
        while(q--)
        {
            int x,y;
            cin>>x>>y;
          long long sum = pref[y] - pref[x - 1];
            
            cout<<sum<<" ";
        }
        cout<<endl;
        
        
    }
}