#include <bits/stdc++.h> // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;
// x+y =z 
// z= k(a*b)  , x,y = c*a 
void solve()    
{
    int x = 0, y = 0, z = 0;
    int a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << "NO\n";
    }
    else
    {cout<<"YES\n";
    int sum = a*b*2;
    int g = sum -a ; 
    cout<<a<<" "<<g<<" "<<sum;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}