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
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int time = b;
    int sum = 0;
    // make set of arrays such that sum of adjacent elements is less than or equal to a
//   x`

    int sec = 0;

    int i = 0;

    // dont make it run

    // while (time && i <= arr.size())
    // {
    //     // cout << "time rn-> " << time << "\n";
    //     if (time == 1)
    //     {
    //         if (time + arr[i] <= a)
    //         {
    //             time += arr[i];
    //         }
    //         else
    //         {
    //             time = min(time + arr[i], a);
    //         }

    //         ++i;
    //     }
    //     sec++;
    //     time--;
    // }
    for (int i = 0; i < arr.size(); i++)
    {
        time += min(arr[i], a - 1);
    }
    cout << time;
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