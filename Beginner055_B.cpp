#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> x(10);
    vector<int> y(10);
    double ans = 0.0;
    for (int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    
    printf("%.12lf", ans);
}