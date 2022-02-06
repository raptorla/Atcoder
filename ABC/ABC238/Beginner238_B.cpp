#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;
    vector<bool> b(360);
    b[0] = true; 
    int p = 0;
    for(int i=0; i < N; i++){
        int a;
        cin >> a;
        p += a;
        p %= 360;
        b[p] = true;
    }
    int ans = 0, temp = 0;

    for(int i= 0; i <= 360; i++){
      if(b[i % 360]){
        ans = max(ans, temp);
        temp = 0;
      }
      
      temp++;
      
    }
    cout << ans << endl;
    return 0;
}