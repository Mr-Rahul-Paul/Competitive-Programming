#include <iostream> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);z
#define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;
    int r = n % 4;
    if (x % 2 == 0)
    {
        if (r == 0)
            cout << x;
        if (r == 1)
            cout << x - n;
        if (r == 2)
            cout << x + 1;
        if (r == 3)
            cout << x + n + 1;
    }
    else
    {
        if (r == 0)
            cout << x;
        if (r == 1)
            cout << x + n;
        if (r == 2)
            cout << x - 1;
        if (r == 3)
            cout << x - n - 1;
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