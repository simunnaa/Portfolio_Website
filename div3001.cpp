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
    
        vector<int>r(n);
        vector<int>l(n);
        vector<int>rr(n);
        for(int i=0;i<n;i++)
        {
            cin>>r[i]>>l[i]>>rr[i];
        }
        for(int i=0;i<n;i++)
        {
           if(k<=l[i] && k>=r[i])
          {
            k=max(rr[i],k);
          }
    
        }
        cout<<k<<endl;

        }
}