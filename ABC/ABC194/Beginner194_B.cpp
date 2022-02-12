#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N;
    cin >> N;
    vector<ll> a(N);
    vector<ll> b(N);
    
    
    for(int i = 0; i < N; i++){
        cin >> a[i] >> b[i];
    }
    ll ans = 100000000;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            ll tmp;
            if(i == j){
                tmp = a[i] + b[j];
            }
            else{
                tmp = max(a[i], b[j]);
            }
            ans = min(ans, tmp);
        }    

    }
        cout << ans << endl;
        return 0;
}