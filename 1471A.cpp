#include <iostream> // For atoll (ASCII to long long)
#include <vector>   // For atoll (ASCII to long long)
#include <cmath>    // For atoll (ASCII to long long)
                    // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        max += ceil(arr[i] * 1.0 / x);

        min += arr[i];
    }
    min = ceil(min * 1.0 / x);

    cout << min << " " << max;
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