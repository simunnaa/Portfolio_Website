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
        vector<pair<long long,long long>>v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >>v[i].first >>v[i].second;  
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int x = v[i].first%2;
            if(x==v[i].second)
            {
                
            }
        }

        
    }
}