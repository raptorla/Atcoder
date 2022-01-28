#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N;
    cin >> N;
    vector<ll> a(N);
    vector<ll> p(N);
    vector<ll> x(N);
    
    for(int i = 0; i < N; i++){
        cin >> a[i] >> p[i] >> x[i];
    }
    ll ans = 1000000000;
    for(int i = 0; i < N; i++){
        if(a[i] < x[i]){
            ans = min(ans, p[i]);
        }
    }
    if(ans != 1000000000){
    cout << ans << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}