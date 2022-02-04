#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll N;
    cin >> N;
    if(N>=pow(-2,31)&&N<pow(2,31)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}