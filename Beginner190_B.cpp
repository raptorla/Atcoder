#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S, D;
    cin >> N >> S >> D;
    vector<int> x(N);
    vector<int> y(N);
        
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }
    
    long long ans = 0;
    for(int i=0; i<N; i++){
        if(x[i] < S && y[i] > D) ans ++;    
    }
    if(ans >= 1)cout << "Yes" << endl;
    else cout << "No" << endl;
}