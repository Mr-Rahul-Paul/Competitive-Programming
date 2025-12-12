#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
// #define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{
    // find inverse pair and remove j
    //  1≤i<j≤n
    // , ai>a
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < (int)arr.size())
        {
            if (arr[i] > arr[j])
            {
                arr.erase(arr.begin() + j);
                ++counter;
            }
            else
            {
                j += 1;
            }
        }
    }
    cout << counter;
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