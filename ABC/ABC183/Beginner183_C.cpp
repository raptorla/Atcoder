#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, K;

int main(){
    cin >> N >> K;
    vector<vector<ll> > t(N, vector<ll>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> t[i][j];
        }
    }
    ll ans = 0;
    vector<ll> index;
    for(int i = 0; i < N; i++){
        index.push_back(i);
    }
    do{
        ll sum = 0;
        for(int i = 0; i < N; i++){
            sum += t[index[i]][index[(i + 1) % N]];
        }
        if(sum == K){
            ans ++;
        }

    }while(next_permutation(index.begin() + 1, index.end()));
    cout << ans << endl;
    return 0;
}