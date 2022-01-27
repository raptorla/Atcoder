#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    long long a = t / 100;
    long long b = t % 100 / 10;
    long long c = t % 10;
    long long ans = a*100 + b*10 + c + b*100 + c*10 + a +c*100 + a*10 + b ;
    
    cout << ans << endl; 
}
