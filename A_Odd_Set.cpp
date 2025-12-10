#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;


void solve(){
    int n ; 
    cin >> n; 
    //sum = odd when ? 
/*
 o  + o  =e 
 e + e = e 
 o  + e = o 
 e + o = o
*/ 
int e = 0 ; 
int o = 0 ; 
for (int i = 0 ; i < 2*n ; i++){
    int m ; cin>>m ; 
    if ( m % 2 ==0 ){ e++; }
    else { o++; }
}
if (e==o){ cout<<"Yes";return; }
else {cout<<"No";return;}
}


signed main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    cout.tie(0);
    int tc ;
    cin>>tc;  
    while (tc--)
    {
        solve();
        cout << endl;
    }
}