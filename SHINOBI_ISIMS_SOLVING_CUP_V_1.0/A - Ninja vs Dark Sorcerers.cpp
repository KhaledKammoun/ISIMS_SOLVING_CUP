#include <bits/stdc++.h>
#include <fstream>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;

int main(){
    FAST ;
    int s ;
    cin>>s ;
    int n ;
    cin>>n ;
    vector<int>v(n+1,0) ;
    for (int i = 1;i<n+1;i++){
        cin>>v[i] ;
        v[i]+=v[i-1] ;
    }

    int t ;
    cin>>t ;
    for (int i = 0; i < t; i++){
        int x ;
        cin>>x ;

        if (v[n] - v[x-1] >= s)
            cout<<"NO"<<endl ;
        else
            cout<<"YES"<<endl ;
    }
    return 0 ;
}
