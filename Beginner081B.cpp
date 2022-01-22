#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long N , ans = 0;
    cin >> N;
    vector<long long> a(210);
    for (long long i = 0; i < N; i++){
        cin >> a[i];
    }

    while (true){
        bool exist_odd = false;
        for (int i = 0; i < N; i++){
            if (a[i] % 2 != 0) exist_odd = true;
        }
        if (exist_odd) break;

        for (int i = 0; i < N; i++){
            a[i] /= 2;
        }
        ans ++;
    }

    cout << ans << endl;
}
