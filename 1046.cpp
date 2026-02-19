#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int ans = 0;

        int cnt = 0;
        for (int i = 0; i < n; i++)
         {
            if (s[i] == '1')
            {
                 cnt++;
            }
            if (i >= k)
            {
                if (s[i - k] == '1')
                {
                 cnt--;
                } 
            }
            if (cnt > 1) {
                ans = 1;
                break;
            }
        }

        if (ans==1) 
        {
            cout << "NO"<<endl;;
            continue;
        }

        cout << "YES"<<endl;;
        vector<int> p(n);
        int o = 1, z = n;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                p[i] = o++;
            } else {
                p[i] = z--;
            }
        }

        for (int i = 0; i < n; i++) 
        {
            cout << p[i] << " ";
        }
        cout <<endl;;
    }
}
