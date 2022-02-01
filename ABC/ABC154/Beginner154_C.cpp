#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N;
int main(void)
{
    cin >> N;
    vector<ll> key(N);
    set<ll> a;
    for (int i = 0; i < N; i++){
        ll X;
        cin >> X;
        a.insert(X);
    }
    
    if(a.size() == N) cout << "YES" << endl;
    else cout << "NO" << endl;

}