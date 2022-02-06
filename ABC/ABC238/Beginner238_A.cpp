#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll N;
    cin >> N;
    if(N * N < pow(2,N)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}