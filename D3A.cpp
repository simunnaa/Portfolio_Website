#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k,n;
        cin>>k>>n;
        long long x=n;
        for(int i=0;i<k;i++)
        {
           x*=2;
        }
        cout<<x<<endl;
    }
}