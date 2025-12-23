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
  
    int ans = a[0];
    
   
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