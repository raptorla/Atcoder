#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(200, 0);
  for(ll i = 0; i < n; i++){
    cin >> a[i];
    b[a[i] % 200]++;
  }
  ll ans = 0;
  for(ll i = 0; i < 200; i++){
    ans += (b[i] * (b[i] - 1)) / 2;
  }
  cout << ans << endl;
  return 0;
}