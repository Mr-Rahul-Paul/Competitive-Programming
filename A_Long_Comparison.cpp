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
    int x, p, X, P;
    cin >> x >> p;
    cin >> X >> P;
    int a , b ; 
     a = to_string(x).length() + p;
     b = to_string(X).length() + P;
    // b= X*pow(10, P);
    if (a > b)
    {
        cout << ">";
        return;
    }
    else if (a < b)
    {
        cout << "<";
        return;
    }
    else
    {
        cout << "=";
        return;
    }
    // cout << a <<endl<< b;
    // return ;  
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