#include<bits/stdc++.h>  // For atoll (ASCII to long long)
#define strtoint(x) atoll(x.c_str())
#define inttostr(x) to_string(x);
#define inttobi(n) bitset<64>(n).to_string()
// #define bitoint(x) a(x); // Commented out as 'a' is not defined in macro scope, usually logic is stoull
#define int long long
#define MOD 1000000007;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // 1. Calculate the total time for the full path
    int total_sum = 0;
    for(int i = 0; i < n - 1; i++){
        total_sum += abs(a[i] - a[i+1]);
    }

    int ans = total_sum;

    // 2. Try removing the FIRST floor (index 0)
    // If we remove a[0], we don't walk from a[0] to a[1]. 
    // The path starts at a[1].
    ans = min(ans, total_sum - abs(a[0] - a[1]));

    // 3. Try removing the LAST floor (index n-1)
    // If we remove a[n-1], we don't walk from a[n-2] to a[n-1].
    // The path ends at a[n-2].
    ans = min(ans, total_sum - abs(a[n-2] - a[n-1]));

    // 4. Try removing any MIDDLE floor (index 1 to n-2)
    for(int i = 1; i < n - 1; i++){
        // Calculate sum if we remove a[i]
        // Formula: Total - (walk to i + walk from i) + (walk from i-1 directly to i+1)
        int sum_without_i = total_sum 
                            - abs(a[i] - a[i-1]) 
                            - abs(a[i+1] - a[i]) 
                            + abs(a[i+1] - a[i-1]);
        
        ans = min(ans, sum_without_i);
    }

    cout << ans;
}

signed main(){
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