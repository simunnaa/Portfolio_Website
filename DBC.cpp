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
        long long sum=-1;
        
        if(k%2!=0 && n%2!=0)
        {
            long long x=n*k +1;
            sum=x;
        }
        else if(k%2==0)
        {
            long long z = k/2;
            long long y=z*n + k/z;
            if(y%2==0)
            {
              sum=y;
            }
            
        }
        
        
        cout<<sum<<endl;
    }
}