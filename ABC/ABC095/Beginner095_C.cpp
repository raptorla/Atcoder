#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll ans = 1000000000000;
    ll count = 0;
    for(int i = 0; i <= 100000; i++){
        count = i * 2 * c + max(0LL, x - i) * a + max(0LL, y - i) * b;
        ans = min(ans, count);
    }
    cout << ans << endl;

}

