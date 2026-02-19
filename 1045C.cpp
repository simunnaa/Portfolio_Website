#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v(n+1);
        for(long long i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        long long os=0;
        long long es=0;
        long long c=0;
        for(long long i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                 if(v[i]<v[i+1] && v[i]<v[i-1])
                {
                    c+=(v[i-1]-v[i]) + (v[i+1]-v[i]) +1;
                     v[i-1]=v[i];
                     v[i+1]=v[i]-1;
                
                    
                }
                if(v[i]<v[i-1])
                {
                    c+=(v[i-1]-v[i]);
                    v[i-1]=v[i];
                }
                 if(v[i]<v[i+1])
                {
                    c+=(v[i+1]-v[i]);
                    v[i+1]=v[i];
                    
                }
                
                
            }
           
        }
         for(long long i=1;i<=n-1;i++)
        {
            if(i%2==0)
            {
                
                if(v[i]<v[i+1])
                {
                    c+=(v[i+1]-v[i]);
                    v[i+1]=v[i];
                    
                }
            }
            
           
        }
        
        
           cout<<c<<endl;
          
        
        
    }
}