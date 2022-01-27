#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<double> x(110);
    vector<double> y(110);
        
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }
    double ans = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            double length = sqrt((x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j])); 
            if(length >= ans){
                ans = length;
            }

        }
        
    }
    printf("%.12lf\n", ans);

}