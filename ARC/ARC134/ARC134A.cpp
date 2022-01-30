#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll N, L, W;
    cin >> N >> L >> W;
    vector<ll> a(N);

    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    ll ans = 0;
    ll tmp = 0;
    int i = 0;
    while(tmp < L){
        if(a[i] - tmp <= W){
            if((a[i] - tmp) <= 0 && i < N){
                tmp = a[i] + W;
                i++;
            }
            else{
                tmp += W;
                ans++;

            }
        }
        else{
            tmp += W;
            ans ++;
        }
        
    }
    
    cout << ans << endl;
}