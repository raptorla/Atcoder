#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll N, X;
    cin >> N >> X;
    vector<pair<ll, ll> > a;
	
	for (int i = 0; i < N; i++) {
		ll x , y;
		cin >> x >> y;
		a.push_back( pair(x,y) );
	}
    X *= 100;
    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < N ; i++){
        if(sum<=X){
            sum += a[i].first * a[i].second;
            ans ++;
        }
        else{
            break;
        }
    }
    if(sum<=X)cout << "-1" << endl;
    else cout << ans << endl; 
    return 0;
}