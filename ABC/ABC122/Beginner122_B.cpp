#include <bits/stdc++.h>

using namespace std;


int main()
{
    string S;
    cin >> S;
    int ans = 0;
    int TempAns = 0;
    for (int i = 0; i < S.size(); i++){
        if(S[i] == 'A' ||S[i] == 'T' ||S[i] == 'C' ||S[i] == 'G'){
            TempAns++;
        }
        else{
            
            TempAns = 0;
        }
        ans = max(TempAns, ans);
    }
    cout << ans << endl;
}

