#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll N, M;
    cin >> N >> M;
    vector<vector<ll> > a(N, vector<ll>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for(int i = 0; i < M; i++){
        for(int j = i + 1; j < M; j++){
            ll count = 0;
            for(int k = 0; k < N; k++){
                count += max(a[k][j], a[k][i]);
            }
            ans = max(count, ans);
        }
    }
    cout << ans << endl;
    return 0;
}