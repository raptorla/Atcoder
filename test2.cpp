#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  vector<pair<int, int> > A(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i].first >> A[i].second;
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<string> > result(N,vector<string>(N, "-"));
  for (int i = 0; i < M; i++){
      A[i].first--;
      A[i].second--;
      result[A[i].first][A[i].second] = "o";
      result[A[i].second][A[i].first] = "x";
  }
  for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
          cout << result[i][j];
          if(j == N - 1){
              cout << endl;
          }
          else{
              cout << " ";
          }
        }
  }
}