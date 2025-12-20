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
    int n, q;
    cin >> n >> q;
    int sum = 0;
    vector<int> arr(n);
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        pref[i + 1] = pref[i] + arr[i];
    }
    int l, r, k;
    // cout << sum;
    while (q--)
    {
        int tsum = sum;
        cin >> l >> r >> k;

        int range = r - l + 1;
        int prefsum = pref[r] - pref[l - 1];
        /*sub the range of the original arr and add k*range
         cause thats the new sum of sub arr*/
        tsum = tsum - prefsum + (k * range);


        /* dont sim , optimise here*/
        // for (int i = l - 1; i <= r - 1; i++)
        // {
        //     tsum += (k - arr[i]);
        // }
        if (tsum % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // cout<<tsum
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
    }
}