#include <bits/stdc++.h> // For atoll (ASCII to long long)

using namespace std;

void solve()
{
    unordered_map<int, int> m;
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int a31, a32, a33;
    int ans1, ans2, ans3;
    int ans;
    a31 = a1 + a2;
    a32 = a4 - a2;
    a33 = a5 - a4;

    ans1 = (a31 == (a1 + a2))+ (a31 == (a4 - a2)) + (a31 == (a5 - a4));
    ans2 = (a32 == (a1 + a2)) + (a32 == (a4 - a2)) + (a32 == (a5 - a4));
    ans3 = (a33 == (a1 + a2)) + (a33 == (a4 - a2)) + (a33 == (a5 - a4));
    ans = max(ans1, max(ans2, ans3));
    cout << ans;
    return;
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