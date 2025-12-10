#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;
// Increment any element divisible by its predecessor to break divisibility chain.
void incarr(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {

        if (arr[i] % arr[i - 1] == 0)
        {
            if (arr[i - 1] != 1)
                arr[i]++;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            arr[i]++;
    }
    incarr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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