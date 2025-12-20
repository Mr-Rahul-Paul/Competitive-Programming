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
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    vector<int> radius;
    for (int i = 1; i < n; i++)
    {
        radius.push_back(x[i] - x[i - 1]);
    }
 
    int counter = 0;
    int m = radius.size();
 
    for (int i = 0; i < m; i++)
    {
 
        if (i == 0 || i == m - 1)
        {
            counter++;
        }
 
        else if (radius[i] < radius[i - 1] + radius[i + 1])
        {
            counter++;
        }
    }
 
    cout << counter;
}
 
//fk you CF
// cout << l; works
// for (auto x : radius)
// {
//     cout << x;
// }
//     for(int i =0 ;i<radius.size();i++){
 
//     }
// }
 
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> x(n);
//     for (int i = 0 ;i<n ;i++) cin >> x[i];
 
//     int ans = 0;
//     for (int i = 2; i < n; i++)
//         if (x[i] - x[i-1] == x[i-1] - x[i-2])
//             ans++;
 
//     cout << ans ;
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