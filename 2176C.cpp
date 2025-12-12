#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> o, e;
    for(int i=0, x; i<n; i++) {
        cin >> x;
        (x % 2 ? o : e).push_back(x);
    }
    sort(o.rbegin(), o.rend());
    sort(e.rbegin(), e.rend());
    
    vector<int> p(e.size() + 1, 0);
    for(int i=0; i<e.size(); i++) p[i+1] = p[i] + e[i];

    for(int k=1; k<=n; k++) {
        if(o.empty()) { cout << "0 "; continue; }
        
        int take = min((int)e.size(), k - 1);
        if ((k - 1 - take) % 2 != 0) take--;

        if (take >= 0 && (k - take) <= o.size()) 
            cout << o[0] + p[take] << " ";
        else 
            cout << "0 ";
    }
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) { solve(); cout << "\n"; }
}