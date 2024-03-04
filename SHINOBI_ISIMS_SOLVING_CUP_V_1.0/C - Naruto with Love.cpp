
#include <bits/stdc++.h>
#include <fstream>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;

int main(){
    FAST ;
    int t ;
    cin>>t ;

    while (t--) {
        int n ;
        cin>>n ;
        vector<long long>v(n,0) ;
        for (int i = 0; i < n; i++){
            cin>>v[i] ;
        }
        sort(v.begin(), v.end()) ;
        long long s = 0 ;
        for (int i = 1; i < n; i++) {
            s+=(v[i]-v[i-1]) ;
        }
        cout<<s<<endl ;
    }

}
