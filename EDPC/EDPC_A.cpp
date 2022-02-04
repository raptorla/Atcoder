#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll N;
    cin >> N;
    vector<ll> h(N);
    vector<ll> dp(N, pow(10, 15));
    for(int i = 0; i < N; i++){
      cin >> h[i];
    }
    bool flag = false;
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for(ll i = 2; i < N; i++){
      ll cost2 = dp[i - 2] + abs(h[i] - h[i - 2]);
      ll cost1 = dp[i - 1] + abs(h[i] - h[i - 1]);
      dp[i] = min(cost2, cost1);
    }
    cout << dp[N-1] << endl;
    return 0;
}