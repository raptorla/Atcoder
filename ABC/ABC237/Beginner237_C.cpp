#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string S;
    cin >> S;
    bool flag = false;
    int len = S.size();
    for(int i=len/2; i >= 1; i--){
        if(S == string(S.rbegin(),S.rend())){
            flag = true;
            break;
        }
        else{
            S = "a" * i + S;
        }
    }
    for(int i=len/2; i <= len; i++){
        if(S == string(S.rbegin(),S.rend())){
            flag = true;
            break;
        }
        else{
            S = "a" + S;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}