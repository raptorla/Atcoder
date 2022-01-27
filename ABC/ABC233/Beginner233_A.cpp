#include <bits/stdc++.h>

using namespace std;



int main()
{
    int x, y;
    cin >> x >> y;
    
    long long ans = 0;
    ans = (y - x + 10 - 1) / 10;
    if(ans>=0) cout << ans << endl;
    else cout << "0" << endl; 
}
