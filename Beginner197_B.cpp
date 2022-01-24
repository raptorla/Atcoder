#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    //vector<vector <string> > s(110, vector<string>(110));
    vector<string> s(110);    
    for(int i=0; i < H; i++){
            cin >> s[i];
    }
    X -= 1;
    Y -= 1;
    long long ans = -3;
    for(int i=X; i>=0; i--){
        if(s[i][Y] !='#'){
            ans++;
        }
        else break;
        
    }
    for(int i=X; i<H; i++){
        if(s[i][Y] !='#'){
            ans++;
        }
        else break;
    }
    for(int i=Y; i>=0; i--){
        if(s[X][i] !='#'){
            ans++;
        }
        else break;
    }
    for(int i=Y; i<W; i++){
        if(s[X][i] !='#'){
            ans++;
        }
        else break;
    }
    cout << ans << endl;
    return 0;
}