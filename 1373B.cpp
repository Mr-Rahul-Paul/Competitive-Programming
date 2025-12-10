#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

void err(string &s, int &counter)
{
    int n = s.length();
    bool deleted = false;
    for (int i = 1; i < n && s.length() > 1; i++)
    {
        if (s[i] != s[i - 1])
        {
            s.erase(i - 1, 2);
            // s.erase(i - 1, 1);
            counter++;
            deleted = true;
            break;
        }
    }
    if (!deleted || s.length() <= 1 || s == "00" || s == "11")
    {
        return;
    }
    err(s, counter);
}
void solve()
{
    string s;
    cin >> s;
    int counter = 0;
    err(s, counter);
    // cout << counter;
    cout << (counter % 2 ? "DA" : "NET");
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