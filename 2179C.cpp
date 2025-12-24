#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    // Strategy 1: Reduce everything to 0. Max k = a[0].
    int ans = a[0];
    
    // Strategy 2: Reduce everything to a[0]. Max k = a[1] - a[0].
    // This is only valid if we can find a divisor > a[0].
    // Since we want max k, we pick the number itself (a[1] - a[0]).
    // If this difference is greater than a[0], it's a better answer.
    if (a[1] - a[0] > a[0]) {
        ans = a[1] - a[0];
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}