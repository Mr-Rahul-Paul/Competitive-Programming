#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;
string shift(string &s)
{
    char t = s[s.length() - 1];
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = s[i - 1];
    }
    s[0] = t;
    return s;
}
void solve()
{
    // we have binary string of atleast  one 1
    // get string of 1
    // make right shift string t for t[j] = 1 , s[j] =1
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = shift(s);
    cout << t;
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