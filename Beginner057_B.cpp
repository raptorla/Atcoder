#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a(60);
    vector<int> b(60);
    vector<int> c(60);
    vector<int> d(60);
    vector<long long> ans(3600, 0);
    for (int i = 0; i < N; i++){
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < M; i++){
        cin >> c[i] >> d[i];
    }
    
    
    for (int i = 0; i < N; i++){
        long long cnt = 1000000000;
        for (int j = 0; j < M; j++){
            long long x=abs(a[i] - c[j]);
            long long y=abs(b[i] - d[j]);
            if(x + y < cnt){
                cnt = x + y;
                ans[i] = j + 1;
            }
        }
    }
    for(int i = 0; i < N; i++){
        cout << ans[i] << endl;
    }
}