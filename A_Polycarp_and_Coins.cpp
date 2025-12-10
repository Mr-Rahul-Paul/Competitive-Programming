#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;

//  1
//  burle and 2
//  burles. Polycarp likes both kinds of coins equally. So he doesn't want to pay with more coins of one type than with the other.

// Thus, Polycarp wants to minimize the difference between the count of coins of 1
//  burle and 2
//  burles being used. Help him by determining two non-negative integer values c1
//  and c2 which are the number of coins of 1 burle and 2
//  burles, respectively, so that the total value of that number of coins is exactly n
//  (i. e. c1+2⋅c2=n), and the absolute value of the difference between c1
//  and c2 is as little as possible (i. e. you must minimize |c1−c2|).
void solve(){
    int am ;
    cin >> am ; 
    // am / 3 
    
    int c1 = am/3 ; 
    int c2 = c1 ; 
    if (am%3 == 0 ) {cout << am/3 << " " << am/3 ; return ;}

    else if ( am- (c1 + 2*c2)  == 1){cout << am/3 + 1<< " " << am/3 ; return ;}
    
    else {cout << am/3 << " " << am/3 + 1 ; return ;}
    // am % am /3!= 0  
    
  
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