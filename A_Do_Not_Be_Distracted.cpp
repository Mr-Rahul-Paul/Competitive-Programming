#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<int, bool> m;
        bool f = false;

        for (int i = 0; i < n; i++)
        {

            if (i > 0 && m[s[i]] && s[i] != s[i - 1])
            {
                f = true;
                break;
            }
            m[s[i]] = true;
        }
        cout << (f ? "NO" : "YES") << endl;
    }
    return 0;
}