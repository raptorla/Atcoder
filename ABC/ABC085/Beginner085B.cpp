#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long N, ans = 0;
    cin >> N;
    vector<long long> a(110);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    vector<long long> num(110, 0);
    for(int i = 0; i < N; i++){
        num[a[i]] ++;
    }
    for(int i = 1; i <= 100; i++){
        if(num[i]) ans++;
    }

    cout << ans << endl;
}
