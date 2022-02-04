#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll N, A, B; 
    cin >> N >> A >> B;
    ll len = A + B;
    ll ans = (N / len) * A + min(A, N % len);

    cout << ans << endl;
    return 0;
}