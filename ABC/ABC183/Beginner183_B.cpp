#include <bits/stdc++.h>
using namespace std;



int main(){
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double x = (sx * gy + sy * gx)  / (sy + gy); 
    printf("%.12lf", x);
    return 0;
}