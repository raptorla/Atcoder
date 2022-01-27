#include <bits/stdc++.h>
using namespace std;


int main(){
    long long N, K;
    long long x, y;
    cin >> N >> K;
    vector<pair<long long, long long> > friends;

    for(long long i = 0; i < N; i++){
        cin >> x >> y ;
        friends.push_back({ x,y }); //a[i].first=A_i, a[i].second=B_i
        
    }     
    sort(friends.begin(), friends.end());
    for(int i = 0; i < N; i++){
        if(friends[i].first > K) break;
        K += friends[i].second;
    }
    cout << K << endl;  
    return 0;
}