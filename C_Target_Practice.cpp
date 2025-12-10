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
    char arr[10][10];
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'X')
            {
                if (i == 0 || i == 9) // for first and last row
                {
                    ans += 1;
                }
                else if (i == 1 || i == 8)
                {
                    if (j == 0 || j == 9)
                        ans += 1;
                    else
                        ans += 2;
                }
                else if (i == 2 || i == 7)
                {
                    if (j == 0 || j == 9)
                        ans += 1;
                    else if (j == 1 || j == 8)
                        ans += 2;
                    else
                        ans += 3;
                }
                else if (i == 3 || i == 6)
                {
                    if (j == 0 || j == 9)
                        ans += 1;
                    else if (j == 1 || j == 8)
                        ans += 2;
                    else if (j == 2 || j == 7)
                        ans += 3;
                    else
                        ans += 4;
                }
                else if (i == 4 || i == 5)
                {
                    if (j == 0 || j == 9)
                        ans += 1;
                    else if (j == 1 || j == 8)
                        ans += 2;
                    else if (j == 2 || j == 7)
                        ans += 3;
                    else if (j == 3 || j == 6)
                        ans += 4;
                    else
                        ans += 5;
                }
            }
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