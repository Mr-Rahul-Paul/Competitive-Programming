#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
#define bitoint(x) a(x);
#define int long long
#define MOD 1000000007;

using namespace std;


int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    // Return gcd of a and b
    return result;
}

void solve(){
    int a , b;
    cin>> a>>b;
    if(a==b){cout<<"0 0";
    return;
    }
    else if (b<a){
            cout<<a-b<<" "<<min(a%(a-b),(a-b) - a%(a-b));
            }
    else{cout<<b-a<<" "<<min(b%(b-a),(b-a)-b%(b-a));
    }
 
}


signed main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}