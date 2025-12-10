// #include <bits/stdc++.h> // For atoll (ASCII to long long)
#include <iostream> // For atoll (ASCII to long long)
#include <String>   // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

void solve()
{

    string x ;
    int n;
    string s;
    int m;
    cin >> n >> m;
    cin >> x >> s;
    int counter = 0;
    while (true)
    {
        if (x.find(s) != -1)
        {
            cout << counter;
            break;
        }
        x += x;
        counter++;
        if (counter==10){
            cout << -1;
            break;
        }
    }
    // cout << x;
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