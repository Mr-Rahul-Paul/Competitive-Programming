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

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (b - a == c - b) // tick
    {
        cout << "YES";
        return;
    }
    else if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
    {
        cout << "YES";
        return;
    }
    else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
    {
        cout << "YES";
        return;
    }
    else if ((2 * b - c) % a == 0 && (2 * b - c) > 0) // tick
    {
        cout << "YES";
        return;
    }

    else

        cout << "NO";
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