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
    /*
    the idea is to take all possible positions the king can be attacked from
    do the same for the queen
    make set of points
    common points are the answer
    */
    int px[4] = {-1, 1, -1, 1};
    int py[4] = {-1, -1, 1, 1};
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    set<pair<int, int>> king, queen;

    for (int i = 0; i < 4; i++)
    {
        king.insert({xk + px[i] * a, yk + py[i] * b});
        queen.insert({xq + px[i] * a, yq + py[i] * b});

        king.insert({xk + px[i] * b, yk + py[i] * a});
        queen.insert({xq + px[i] * b, yq + py[i] * a});
    }

    int ans = 0;

    for (auto pos : king)
    {
        if (queen.find(pos) != queen.end())
        {
            ans += 1;
        }
    }
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