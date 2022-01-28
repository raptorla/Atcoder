#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N, sum = 0;
    cin >> N;
    vector<ll> a(N);
    vector<ll> b(N+1, 0);
    ll mod = 1000000000 + 7; 
    for(int i = 0; i < N; i++){
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
        
    }
    ll ans = 0;

    for(int i = 0; i < N; i++){
        sum = (b[N] - b[i + 1]) % mod;
        ans += a[i] * sum;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}