#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<string> S(100010);
    vector<string> T(100010);
    
    for(int i=0; i < N; i++){
        cin >> S[i];
    }
    for(int i=0; i < M; i++){
        cin >> S[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) {
            if(S[i] == T[j]) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }       
        }
        
        
    }
    return 0;
}