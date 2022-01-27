#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long x, a, b, c, ans = 0;
    cin >> a >> b >> c >> x;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++) {
            for(int k = 0; k <= c; k++){
                long long sum = i * 500 + j * 100 + k * 50;
                if(sum == x) ans++;
            }
        }
    }

    cout << ans << endl;
}
