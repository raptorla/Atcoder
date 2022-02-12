#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;
    vector<int> p(N);
    vector<int> q(N);
    for (int i = 0; i < N; i++){
      cin >> p[i];
    }
    for (int i = 0; i < N; i++){
      cin >> q[i];
    }
    vector<int> v;
    for (int i = 0; i < N; i++){
      v.push_back(i+1);
    }
    int index = 0, a = -1, b = -1;
    do {
        bool ok = true;
        for (int i = 0; i < N; i++){
          if(v[i] != p[i]) {
            ok = false;
          }
        }
        if(ok){
          a = index;
        }
        ok = true;
        for (int i = 0; i < N; i++){
          if(v[i] != q[i]) {
            ok = false;
          }
        }
        if(ok){
          b = index;
        }
        index++;
    }while (next_permutation(v.begin(), v.end()));
    int ans = abs(a - b);
    cout << ans << endl;
    return 0;

}