#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> t(N);
        
    for(int i=0; i<N; i++){
        cin >> t[i];
    }
    long long ans = 100000000000;
    
    for(int i=1; i<=100; i++){
        long long sum = 0;
        for(int j = 0; j < N; j++){
            sum += (t[j] - i) * (t[j] - i);
        }
        if (ans >= sum){
            ans = sum;
        }
        
    }
    cout << ans << endl;
}