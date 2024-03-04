
#include <bits/stdc++.h>
#include <fstream>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;

int main(){
    FAST ;
    int n, m ;
    cin>>n>>m ;
    vector<vector<int>> v(n + 1, vector<int> (m+1, 0)) ;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            char c ;
            cin>>c ;
            if (c == 'N')
                v[i][j] = 2 ;
            else if (c == 'D')
                v[i][j] = 1 ;
            else
                v[i][j] = 0 ;    
        }
    }
    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j <= m; j++) {
            if ((v[i-1][j] == 2 || v[i][j-1] == 2) && v[i][j] == 1){
                v[i][j] = 2 ;
                if (v[i-1][j] == 1){
                    for (int k = j; k <= m && v[i-1][k] != 0; k++){
                        v[i-1][k] = 2 ;
                    }
                }
            }
            else {
                break ;
            }
        }
    }
    if (v[n][m] == 2) 
        cout<<"Win"<<endl ;
    else 
        cout<<"Lose"<<endl ;
    return 0 ; 
}
