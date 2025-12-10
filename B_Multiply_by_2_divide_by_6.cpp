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

    if (n == 1)
    {
        cout << 0;
        return;
    }
    int a = 0, b = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        ++a;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        ++b;
    }
    if (n != 1 || b < a)
    {
        cout << -1;
    }
    else
    {
        cout << 2 * b - a;
    }
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