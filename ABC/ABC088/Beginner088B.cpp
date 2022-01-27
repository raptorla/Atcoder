#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long N, Alice = 0, Bob = 0;
    cin >> N;
    vector<long long> a(110);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(int i = 0; i < N; i +=2){
        Alice += a[i];
    }
    for(int i = 1; i < N; i +=2){
        Bob += a[i];
    }

    cout << Alice - Bob << endl;
}
