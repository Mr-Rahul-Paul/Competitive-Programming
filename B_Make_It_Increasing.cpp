#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
// #define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    // if (n == 1)
    // {
    //     cout << 0;
    //     return;
    // }
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] == 0) // not posasible to make increasing
        {
            cout << -1;
            return;
        }
        if (arr[i] >= arr[i + 1])
        {
            while (arr[i + 1] <= arr[i])
            {
                arr[i] = arr[i] / 2;
                counter++;
            }
        }
    }
    // for (auto x : arr)
    // {
    //     cout << x << " ";
    // }
    cout << counter;
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