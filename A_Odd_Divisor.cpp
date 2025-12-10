#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

bool isPowerOfTwo(long long n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return (n == 1);
}


void solve(){
    float x  ;
    cin>>x ; 
    // if (x>1 && x%2==0){ missed a power of 2 

    // if ( (x & x-1 ) == 0){
   
  if (isPowerOfTwo(x)){
    cout<<"NO";
  }
  else{cout<<"YES";}
}


signed main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    cout.tie(0);
    int tc ; cin>>tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}