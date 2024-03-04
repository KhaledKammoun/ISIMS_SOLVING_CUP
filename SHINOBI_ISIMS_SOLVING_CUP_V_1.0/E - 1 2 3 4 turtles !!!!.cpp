
#include <bits/stdc++.h>
#include <fstream>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;
bool verifPal(long long n) {
    string s = "" ;
    while (n!=0) {
        if (n & 1)
            s.insert(0,"1") ;
        else
            s.insert(0,"0") ;

        n>>=1 ;
    }
    for (long long i = 0; i < (s.size() / 2) ; i++){
        if (s[i] != s[s.size()-1-i])
            return false ;
    }
    return true ;
}

bool verifPrem(long long n) {

    for (long long i = 2; i< n / 2; i++){
        if ((n%i) == 0)
            return false ;
    }
    return true ;
}
int main(){
    FAST ;
    int t ;
    cin>>t ;

    while (t--) {
        int n ;
        cin>>n ;
        long long  start = (1<<(n-1)) ;
        long long var = (1<<(n));

        int count_n = 0 ;
        for (long long i = start ; i < var; i++){
            if (verifPal(i) && verifPrem(i))
                count_n++ ;
        }
        cout<<count_n<<endl ;
    }
    return 0 ;
}
