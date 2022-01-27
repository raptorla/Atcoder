#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;

int main(){
    cin >> N ;
    vector<pair<int, int>> p(N);
    for(int i = 0; i < N; i++){
        cin >> p[i].first >> p[i].second ;
        
    }
    long long ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                int x1 = p[i].first;
                int x2 = p[j].first;
                int x3 = p[k].first;
                int y1 = p[i].second;
                int y2 = p[j].second;
                int y3 = p[k].second;
                if(((x3 - x1) * (y2 - y1)) == ((y3 - y1) * (x2 - x1))){
                    ans++;
                }
            }
        }
        
    } 
    if (ans>0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}