#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
	int n, w;
	cin >> n >> w;
	vector<pair<ll, ll> > a;
	
	for (int i = 0; i < n; i++) {
		ll x , y;
		cin >> x >> y;
		a.push_back( pair(x,y) );
	}
	sort(a.begin(), a.end(), greater<pair<int, int>>());
	ll sum = 0;
	ll ans = 0;
	int i = 0;
	while(w > sum && i < n) {
		if(w >= sum + a[i].second){
			ans += a[i].first * a[i].second;
			sum += a[i].second;
			i++;
			
		}
		else{
			ans += a[i].first;
			sum += 1;
		}
	}
	cout << ans << endl;
	return 0;
}