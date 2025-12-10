#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; //test cases
    cin>>t;
    while(t--){
        int n ; 
        cin>> n ; 
        unordered_map<int, int>a;
        long long count =0 ;
        int num  ; 
        for (int i = 0 ; i < n; i++){
            cin>>num;
            count +=a[num-i]++; 
            
        }
        cout<<count<<endl;
     
    }
 return 0;
}