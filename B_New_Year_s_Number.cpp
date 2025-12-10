#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

//2020*n + 2021*m
int solve(){
    int n ; cin>> n ; 
    if (n < 2020){cout<<"NO"; return 0 ; }
    if( n%2020 == 0 || n%2021 == 0){cout<<"YES" ; return 0 ;}
    int b = n/2020;
   int temp = n ; 

    for(int i = 0 ; i <=b ; i++){
        if ( (temp - (2020*i)) % 2021 == 0){cout<<"YES" ; return 0 ; }
    }
      for(int i = 0 ; i <=b ; i++){
        if ( (temp - (2021*i)) % 2020 == 0){cout<<"YES" ; return 0 ; }
    }
    cout<<"NO"; 
    return 0;
    

}


signed main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    cout.tie(0);
    int tc ; cin>>tc; 

    while (tc--)
    {
        solve();
        cout<<endl;
       
    }
}