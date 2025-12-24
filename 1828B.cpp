#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
    {
        cin >> x;
    }
    int ans = arr[0] - 1;
    for (int i = 1; i < n; i++)
    {
        ans = gcd(ans, abs(arr[i] - i - 1));
    }
    cout << ans;
}

signed main()
{
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