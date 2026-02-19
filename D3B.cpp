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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<long long>a;
        if(n==2)
        {
            if(v[0]==2)
            {
                a.push_back(1);
                a.push_back(2);
            }
            else
            {
                a.push_back(2);
                a.push_back(1);
            }
            
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            if(v[i]==n)
            {
                a.push_back(n);
            }
            else
            {
                int x = n-v[i];
                a.push_back(x);
            }
        }
    }
        for(int i=0;i<n;i++)
        {
           cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}