#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
        
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    
    long long ans = 0;
    for(int i=0; i<N; i++){
        if(a[i] != X) cout << a[i] << " ";    
    }
    cout << endl;
}