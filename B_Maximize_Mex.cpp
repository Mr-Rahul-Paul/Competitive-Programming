#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n ,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i = 0 ; i<n ;i++){
            cin>>a[i];
        }
        
        sort(a.begin(), a.end());
        int mex = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == mex) {
                mex++;
            }
            else if (a[i]>mex){
                int diff = mex -a[i];
            }
        }

    }
    

 return 0;
}