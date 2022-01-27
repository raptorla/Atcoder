#include <bits/stdc++.h>
using namespace std;

bool judge_ten(int x){
    while(x){
        if (x % 10 == 7){
            return 0;
        }
        x/= 10;
    }   
        return 1;
     
}

bool judge_eight(int x){
    while(x){
        if (x % 8 == 7){
            return 0;
        }
        x/= 8;
    }   
        return 1;
     
}

int main(){
    int N;
    cin >> N;
    long long ans = 0;
    for(int i = 1; i <= N; i++){
        if(judge_eight(i) && judge_ten(i)){
            ans ++;
        }
    }     
    
    cout << ans << endl;
    return 0;
}