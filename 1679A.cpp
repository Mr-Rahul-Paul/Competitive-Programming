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
    if (n < 4 or n % 2 == 1)
    {
        cout << -1;
        return;
    }

    int x, y;
    x = n / 4;
    if (n % 6 == 0)
    {
        y = n / 6;
     
    }
    else 
    {
        y = (n / 6) + 1;
    }
    
    // y = min(ceil((double)n / 6), (double)n / 4);
    cout << y << " " << x;
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