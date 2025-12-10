    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // if all empty alt R and b
        bool blank = true;
        for (char c : s)
        {
            if (c != '?')
            {
                blank = false;
                break;
            }
        }
        if (blank)
        {
            for (int i = 0; i < n; ++i)
            {
                s[i] = (i % 2 == 0) ? 'B' : 'R';
            }
        }
        else
        {
            int pos = 0;
            while (pos < n && s[pos] == '?')
            {
                pos++;
            }
            // now backtrack
            if (pos > 0)
            {
                for (pos = pos - 1; pos >= 0; --pos)
                {

                    s[pos] = (s[pos + 1] == 'R') ? 'B' : 'R';
                }
            }

            for (int i = 0; i < n; ++i)
            {
                if (s[i] == '?')
                {
                    s[i] = (s[i - 1] == 'R') ? 'B' : 'R';
                }
            }
        }
        cout << s;
    }

    int main()
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
        return 0;
    }