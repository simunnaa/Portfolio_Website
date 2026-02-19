#include <bits/stdc++.h>
using namespace std;

// Function to calculate recursively
long long solve(long long n) {
    if (n == 0) return 0; // base case

    long long x = 1, y = 0;
    
    // Find largest power of 3 less than or equal to n
    while (x * 3 <= n) {
        x *= 3;
        y++;
    }

    // Calculate p and q using integers
    long long p = 1;
    for (int i = 0; i <= y; i++) p *= 3;       // 3^(y+1)
    long long q = 1;
    for (int i = 0; i < y; i++) q *= 3;       // 3^(y)
    q *= y;

    long long o = p + q;

    long long e = n / x;
    long long rem = n % x;

    long long ans = e * o + solve(rem);
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
