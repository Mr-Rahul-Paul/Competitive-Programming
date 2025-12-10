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
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a >= 0)
            ans = min(ans, a);
        else
            ans = min(ans, -a);
    }
    cout << abs(ans);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}