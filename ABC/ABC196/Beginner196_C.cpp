#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long reconstruction(ll n){
    ll val = 1, nn = n;
    while (nn){
        val *= 10;
        nn /= 10;
    } 
    return n * val + n;
}
int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 1; i <= 1000000; i++){
        if(reconstruction(i) <= n){
            ans ++;
        }
        else break;
    }    
    cout << ans << endl;
}