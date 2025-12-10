#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, a, b;
        cin >> l >> a >> b;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1])
            {
                count++;
            }
        }
        int maxi;
        if (b >= 0)
        {
            maxi = (a + b) * l;
        }
        else
        {
            maxi = a * l + b * (1 + count / 2);
        }
        cout << maxi << endl;
    }

    return 0;
}