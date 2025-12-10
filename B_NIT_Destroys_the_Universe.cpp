#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);

#define MOD 1000000007;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            arr.push_back(i + 1);
        }
    }
    arr.push_back(n + 1);

    // if (arr.size() == 1)
    // {
    //     cout << 0;
    //     return;
    // }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] > 1)
            ans++;
    }
    cout << min(ans,2);
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