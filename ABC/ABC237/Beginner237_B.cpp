#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int H,W;
    cin >> H >> W;
    vector<vector<int> > A(H,vector<int>(W));
    vector<vector<int> > B(W,vector<int>(H));
    for(int i=0; i < H; i++){
        for(int j=0; j < W; j++){
            cin >> A[i][j]; ;
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
         B[j][i]=A[i][j];
    }
  }
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++) {
      cout << B.at(i).at(j);
      if (j == H - 1) {
        cout << endl;  // 行末なら改行
      }
      else {
        cout << " ";  // 行末でないなら空白を出力
      }
    }
  }
    return 0;
}