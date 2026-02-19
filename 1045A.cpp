#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,r,b;
        cin>>n>>r>>b;
        if(r>b)
        {
            if(n%2==0 && r%2==0 && b%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(n%2!=0 && r%2!=0 && b%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            
            if(n%2==0 && b%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(n%2!=0 && b%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        }
       
    }
