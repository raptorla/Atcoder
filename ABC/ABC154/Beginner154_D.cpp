#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void)
{
    double K , N;
    cin >> N >> K;
    vector<double> p(N);
    vector<double> v(N);

    for (int i =0; i < N ; i++){
        cin >> p[i];
    }
    for (int i = 0; i < N ; i++){
        v[i] = (p[i] + 1) / 2;
    }
    vector<double> p_cum(N);
    p_cum[0] = v[0];
    for (int i = 1; i < N ; i++){
        p_cum[i] = p_cum[i - 1] + v[i];
    }
    double ans = -10000000000.0;
    double ans_temp = 0.0;
    for (int i = 0; i < N - K + 1 ; i++){
        if(i == 0){
            ans_temp = p_cum[i + K - 1];
        }
        else{
            ans_temp = p_cum[i + K - 1] - p_cum[i - 1];
        }
        ans = max(ans, ans_temp);
    }

    printf("%.12lf", ans);
}