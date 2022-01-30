#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll N;
    cin >> N;

    vector<ll> l(N);
    for (int i = 0; i < N; i++){
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    ll ans = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i; j++){
            for (int k = 0; k < j; k++){
                if((l[i] != l[j]) && (l[j] != l[k]) 
                    && (l[i] != l[k]) && (l[k] + l[j] > l[i])){
                    ans ++;
                }
            }
        }
    }
    cout << ans << endl; 
    return 0;
}