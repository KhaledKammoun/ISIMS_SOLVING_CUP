
#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;
const vector<pair<int,int>> direction {{1,0}, {-1,0},{0,1},{0,-1}};
bool win = false ;
void dfs(vector<vector<bool>> v, vector<vector<bool>> visited, int n, int m, int i, int j) {
    if (i == n-1 && j == m-1 && v[i][j]){
        win = true ;
        return ;
    }

    if (i < 0 || i>=n || j < 0 || j>=m || visited[i][j] || !v[i][j]){
        return ;
    }
    visited[i][j] = true ;
    for (auto x : direction){
        int row = x.first, col = x.second ;
        dfs(v, visited, n,m,i+row, j+col) ;
        if (win) 
            return;
    }
    return ;
}

int main(){
    FAST ;
    int n, m ;
    cin>>n>>m ;
    int row = 0, col = 0;
    vector<vector<bool>> v(n , vector<bool> (m, 0)) ;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            char c ;
            cin>>c ;
            if (c == 'N'){
                row = i ;
                col = j ;
                v[i][j] = true ;
            }
            else if (c == 'D')
                v[i][j] = true ;
            else
                v[i][j] = false ;    
        }
    }
    
    vector<vector<bool>> visited(n, vector<bool>(m)) ;
    dfs(v, visited, n, m, row, col) ;
    if (win) 
        cout<<"Win"<<endl ;
    else 
        cout<<"Lose"<<endl ;
    return 0 ; 
}
