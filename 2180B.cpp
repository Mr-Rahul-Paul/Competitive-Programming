#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

void solve()
// myVector.insert(myVector.begin(), 1);
{
    int n;
    cin >> n;
    vector<string> a;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    vector<string> AnswerVec;
    string s;
    s += a[0];
    for (int i = 1; i < n; i++)
    {
       string t = a[i];
        // choose whichever concatenation is lexicographically smaller
        if (t + s < s + t) s = t + s;
        else s = s + t;
    }
    for (auto x : s)
    {
        cout << x;
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
        cout << endl;
    }
}