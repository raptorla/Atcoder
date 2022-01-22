#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int ans = 0;    
    
    ans = (B - 1 + A - 2) / (A-1);
    cout << ans << endl;
    return 0;
}