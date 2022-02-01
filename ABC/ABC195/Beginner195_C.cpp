#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N;
int main(void)
{
    cin >> N;
    ll ans = 0;
    
    if(N>=1000){
        ans += N - 999;
    }
    if(N>=1000000){
        ans += N - 999999;
    }
    if(N>=1000000000){
        ans += N - 999999999;
    }
    if(N>=1000000000000){
        ans += N - 999999999999;
    }
    if(N>=1000000000000000){
        ans += N - 999999999999999;
    }
    cout << ans << endl;
}