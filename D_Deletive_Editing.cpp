#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    vector<int> cntS(26, 0), cntT(26, 0);
    for (char c : s)
        cntS[c - 'A']++;
    for (char c : t)
        cntT[c - 'A']++;

    vector<int> todelete(26, 0);
    for (int i = 0; i < 26; i++)
    {
        if (cntS[i] > cntT[i])
        {
            todelete[i] = cntS[i] - cntT[i];
        }
    }
    string ans = "";
    for (auto c : s)
    {
        int id = c - 'A';
        if (todelete[id] > 0)
        {
            todelete[id]--;
        }
        else
        {
            ans += c;
        }
    }
    if (ans == t)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}