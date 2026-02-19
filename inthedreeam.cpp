#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = c-a;
        int y = d-b;
        int p = max(a,b);
        int q = min(a,b);
        int n = max(x,y);
        int m = min(x,y);
        if(m<(n-1)/2 || q<(p-1)/2 )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}