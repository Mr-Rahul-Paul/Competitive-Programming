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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = LLONG_MIN;
    ans = max(ans, arr[n - 1] - arr[0]);
    for (int i = 1; i < n; i++)
        ans = max(ans, arr[i] - arr[0]);
    /*  i was wrong here -> we have to calc it// dooing a second loop of arr[i] - arr[n-1] is same as we can reverse the array */

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, arr[n - 1] - arr[i]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, arr[i] - arr[i + 1]);

    cout << ans;
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