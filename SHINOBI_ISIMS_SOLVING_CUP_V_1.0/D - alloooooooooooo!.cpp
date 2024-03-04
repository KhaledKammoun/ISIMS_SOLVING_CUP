
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
        int n, f, a, b ;
        cin>>n>>f>>a>>b ;
        vector<long long>v(n+1,0) ;
        for (int i = 1; i <= n; i++){
            cin>>v[i] ;
        }
        
        for (int i = 1; i <= n; i++) {
            int x = (v[i] - v[i-1]) * a ;
            f-=min(x,b) ;
            if (f <= 0) {
                break ;
            }
        }
       
        if (f <= 0)
            cout<<"NO"<<endl ;
        else
            cout<<"YES"<<endl ;
    }

}
