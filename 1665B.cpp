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
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int mcounter = 1;
    int counter = 1; // works

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            mcounter++;
            counter = max(mcounter, counter);
        }
        else
            mcounter = 1;
    }
    // cout<<counter;
    if (n == 1)
    {
        cout << 0;
        return;
    }
    if (counter == n)
    {
        cout << 0;
        return;
    }

    int left = n - counter;
    int swap = left; // works

    int highestfreq = counter;
    // cout<<highestfreq<<endl;

    int clone = 1;
    left -= highestfreq;

    while (left > 0)
    {

        highestfreq *= 2;
        left -= highestfreq;
        clone++;
    }

    // cout << "clone ->" << clone << endl;
    // cout << "swap ->" << swap << endl;

    cout << clone + swap;
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