#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll X, K, D;
    cin >> X >> K >> D;

    X = abs(X);

    ll straight = min(K, X / D);

    K -= straight;
    X -= straight * D;

    if (K % 2 == 0) {
        cout << abs(X) << endl;
    } else {
        cout << abs(D - X) << endl;
    }
    return 0;
}