#include <bits/stdc++.h>

using namespace std;


int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<char> > C(H, vector<char>(W));
    vector<vector<char> > ans(2*H, vector<char>(W));
   
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> C[i][j];
        }
    }
    for (int i = 0; i < 2*H;i++){
        for (int j = 0; j < W; j++){
            ans[i][j] = C[i / 2][j];
        }
    }
    for (int i = 0; i < 2*H; i++){
        for (int j = 0; j < W; j++){
            cout << ans[i][j];
            if (j == W - 1) {
                cout << endl;  // 行末なら改行
            }
            
        }
    }
}

