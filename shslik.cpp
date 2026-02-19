#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        
        int cnt=0;
        if (x > y) {
            swap(a,b);
            swap(x,y);
        }

        while (k >= a) {
            cnt++;
            k -= x;
        }

        while (k >= b) {
            cnt++;
            k -= y;
        }

        cout << cnt << '\n';
    }

    return 0;
}
