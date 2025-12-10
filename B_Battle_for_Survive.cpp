#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,  sum = 0, seclast, last;
        cin >> n;
        vector<int> a(n);
        
        for (long long i = 0; i < n - 2; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cin >> seclast;
        seclast -= sum;
        cin >> last;
        last -= seclast;
        cout << last << endl;
    }
    return 0;
}