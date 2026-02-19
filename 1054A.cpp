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
        int z=0,neg=0,pos=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                z++;
            }
            else if(v[i]==-1)
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        if(neg%2==0)
        {
            cout<<z<<endl;
        }
        else
        {
            cout<<z+2<<endl;
        }
    }
}