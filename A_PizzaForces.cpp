#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    if (n < 6){n =6 ;}
    cout << (n+1 )/ 2 * 5 << '\n';
  }
}