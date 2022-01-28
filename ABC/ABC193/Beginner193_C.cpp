#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N;
    cin >> N;
    set<ll> index;
    for(ll a = 2; a < pow(10,5) + 10; a++){
        for(ll b = 2; b <= 100; b++){
            if(pow(a, b) <= N){
                index.insert(pow(a, b));
            }
            else{
                break;
            }

        }
    }
    cout << N - index.size() << endl;
    return 0;
}