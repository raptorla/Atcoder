#include <bits/stdc++.h>
using namespace std;

int N, K;

int main(){
    cin >> N >> K;
    vector<vector<int> > T(N, vector<int>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> T[i][j];
        }
    }
    vector<int> index;
    int ans = 0;
    for (int i = 0; i < N; i++)index.push_back(i);
    do{
        int time = 0;
        for(int i = 0; i < N; i++)time += T[index[i]][index[(i+1)%N]];
        if(time==K)ans++;
    }while(next_permutation(index.begin()+1, index.end()));
    cout << ans << endl;
    return 0;
}