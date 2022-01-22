#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N >> Q;
    vector<long long> a(200010);
    vector<long long> x(200010);
    vector<long long> k(200010);

    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<N; i++){
        cin >> x[i] >> k[i];
    }
    double ans = 0;

    for(int i=0; i<N; i++){
        if(H[i] > ans){
            ans = H[i];
        }
        else if(H[i]==ans){
            break;
        }

        
    }
    cout << ans << endl;
    return 0;
}