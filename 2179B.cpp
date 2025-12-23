#include<bits/stdc++.h> 
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x)
#define inttobi(n) bitset<64>(n).to_string()
#define int long long
#define MOD 1000000007

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

   
    int s = 0;
    for(int i = 0; i < n - 1; i++) {
        s += abs(a[i] - a[i+1]);
    }


    int ans = s - abs(a[0] - a[1]);
    ans = min(ans, s - abs(a[n-2] - a[n-1]));

   
    for(int i = 1; i < n - 1; i++){
        int cur = s - abs(a[i] - a[i-1]) - abs(a[i] - a[i+1]) + abs(a[i-1] - a[i+1]);
        ans = min(ans, cur);
    }

    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}