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
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    if (m[1] == 0)
    {
        cout << 0;
        return;
    }
    if (m[0] == 0)
    {
        cout << m[1];
    }
    else
    {
        cout << m[1] * long long(pow(2, m[0]));
    }
}

// void solve()
// {
//     int n;
//     cin >> n;

//     int ones = 0, zeros = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x == 1)
//             ones++;
//         else if (x == 0)
//             zeros++;
//     }

//     if (ones == 0)
//     {
//         cout << 0;
//         return;
//     }

//     cout << ones * (1LL << zeros);
// }
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