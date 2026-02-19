#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k;
        
        cin>>s;
        cin>>k;
        int onecnt=0;
        int total=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                onecnt++;
            }
        }
        int zerocnt = total-onecnt;
        int x = (onecnt - zerocnt)/2;
        if(x==k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

   
}

}