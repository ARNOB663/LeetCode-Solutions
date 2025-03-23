#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // If n is divisible by k, the minimum number of operations is n / k
        if (n % k == 0) {
            cout << n / k << endl;
        } else {
            // Otherwise, calculate the minimum number of operations
            long long operations = n / k + 1;
            cout << operations << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}