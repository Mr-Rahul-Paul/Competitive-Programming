#include <bits/stdc++.h> // For atoll (ASCII to long long)

#define int long long


using namespace std;

void solve()
{

    vector<string> ending = {"00", "25", "75", "50"};
    string s;
    cin >> s;
    if (s.length() < 2)
    {
        cout << "0";
        return;
    }
    int mini = INT_MAX;
    // int n = s.length();
    for (auto suffix : ending){
        char x = suffix[0], y = suffix[1];
        for (int i = s.length() - 1; i >= 0; --i){
            if (s[i] == y){
                for (int j = i - 1; j >= 0; --j){
                    if (s[j] == x){
                        int def = s.length()-j-2;
                        mini= min(mini,def); 
                        break ; 

                    }
                }
                break ;
            }
            
        }
    }
    cout << mini; 
    return ;
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