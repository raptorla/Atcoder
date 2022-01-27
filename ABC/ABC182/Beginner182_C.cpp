#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
    ll N;
    cin >> N ;
    vector<int> count(3);
    while(N){
        count[N % 10 % 3]++;
        N /= 10;
    }
    int amari_all = (count[1] + count[2] * 2) % 3;
    int keta = count[0] + count[1] + count[2];

    int ans = 0;
    if(amari_all == 0){
        ans = 0;
    }
    else if(amari_all == 1){
        if(count[1] >= 1){
            if(keta <= 1){
                ans = -1;
            }
            else{
                ans = 1;
            }
        }
        else{
            if(keta <= 2){
                ans = -1;
            }
            else{
                ans = 2;
            }
        }
        
    }
    else if(amari_all == 2){
        if(count[2] >= 1){
            if(keta <= 1){
                ans = -1;
            }
            else{
                ans = 1;
            }
        }
        else{
            if(keta <= 2){
                ans = -1;
            }
            else{
                ans = 2;
            }
        }
        
    }
    cout << ans << endl;
}