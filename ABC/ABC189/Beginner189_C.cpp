#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void)
{
    ll N;
    cin >> N;
    vector<ll> a(N);
    for (int i =0; i < N ; i++){
        cin >> a[i];
    }
    ll ans = -10000000000;
    ll a_min = 1000000000;

    for (int l = 0; l < N ; l++){
        a_min = a[l];
        for (int r = l; r < N; r++){
            a_min = min(a_min, a[r]);
            ans = max(ans, a_min*(r - l + 1));
        }
    }

    cout << ans << endl;
}