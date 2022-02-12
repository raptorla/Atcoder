#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;
    int ans = 0;

    for(int i= 1; i < 10 ; i++){
        for(int j = 1 ; j < 10 ; j++){
            if(i * j == N){
                ans = 1;
            }
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}