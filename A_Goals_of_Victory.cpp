#include <iostream> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{
    //    missing eff = - (sum)
    //    sum of all eff = 0
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        ans += a;
    }
    cout << -ans;
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