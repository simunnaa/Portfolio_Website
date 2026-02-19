#include<bits/stdc++.h>
using namespace std;
bool year(int n){
string s=to_string(n);
set<char> a(s.begin(),s.end());
return a.size()== s.size();
}
int main(){
    int n;
    cin>> n;
    while(true){

    
    n++;
    if(year(n)) {
        cout<<n;
        break;
    }
}
}