#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;


void solve(){
    int n ; cin>> n ; 
    vector<int> v(n); 
    int mx = INT_MIN; 
    int sum = 0 ; 
    for (int i= 0 ; i < n ; i++){
        cin>>v[i] ; 
        mx = max(mx , v[i]); 
        sum +=v[i];
        }    
    
    cout <<fixed << setprecision(9) << 1.0 * (sum - mx) / (n - 1) + mx;


}


signed main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    cout.tie(0);
    int tc; 
    cin>> tc ; 
    while (tc--)
    {
        solve();
        cout << endl;
    }
}