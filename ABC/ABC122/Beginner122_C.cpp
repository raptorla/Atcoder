#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<vector<int> > S(M, vector<int>());
 
    for(int i = 0 ; i < M ; i++){
        int k ; 
        cin >> k ; 
        for(int j= 0 ; j < k ; j++){
            int s ;
            cin >> s ; 
            S[i].push_back(s); 
        }
    }
    vector<int> p(M);
    for(int i = 0 ; i < M ; i++) cin >> p[i];
 
    int ans = 0 ;
    for(int bit = 0 ; bit <(1<<N); bit++){
        bool ok = true ;
        for(int i = 0 ; i < M ; i++){
            int cnt = 0 ;
            for(int j = 0 ; j < S[i].size() ; j++){
                int now = S[i][j] - 1 ;
                if(bit &(1<<now))cnt++ ;
            }
 
            if(cnt %2 != p[i]) ok = false ;
        }
        if(ok)ans++ ;
    }
 
    cout << ans << endl;
}