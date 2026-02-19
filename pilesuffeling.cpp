#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long zeros_to_import = 0, ones_to_import = 0;

        for (int i = 0; i < n; i++) {
            long long a, b, c, d;
            cin >> a >> b >> c >> d;

            if (c > a) zeros_to_import += (c - a);
            if (d > b) ones_to_import += (d - b);
        }

        cout << max(zeros_to_import, ones_to_import) << '\n';
    }
}
