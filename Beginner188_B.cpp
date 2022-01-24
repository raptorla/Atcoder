#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> b(N);
        
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<N; i++){
        cin >> b[i];
    }
    long long ans = 0;
    for(int i=0; i<N; i++){
        ans += a[i] * b[i];
        
    }
    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}