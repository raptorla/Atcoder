#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, w;
int main(void)
{
    cin >> a >> b >> w;
    
    w *= 1000;
    int ansmax = -100000000;
    int ansmin = 100000000;

    for (int i = 1; i <= 1000000; i++){
        if(a * i <= w && b * i >= w){
            ansmin = min(ansmin, i);
            ansmax = max(ansmax, i);
        }
        
    }
    if(ansmin == 100000000){
        cout << "UNSATISFIABLE" << endl;
    }
    else{
        cout << ansmin << " " << ansmax << endl;
    }
    
    return 0;
}