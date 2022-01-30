#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    
    for(int i=0; i < N; i++){
        cin >> S[i];
    }
    for(int i=0; i < M; i++){
        cin >> T[i];
    }
    set<string> rapid(T.begin(), T.end());
    for(const string& x: S){
        if(rapid.count(x)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
        
        
    
    return 0;
}