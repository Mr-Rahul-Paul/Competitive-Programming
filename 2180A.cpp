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
    int l, a, b;
    cin >> l >> a >> b;
    unordered_map<int, int> m;
    bool notvisited = true;
    int max_val = INT_MIN;
    while (notvisited)
    {
        m[a]++;
        a = (a + b) % l;
        max_val = max(max_val, a);
        if (m[a] > 0)
        {
            notvisited = false;
        }
    }
    cout << max_val;
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