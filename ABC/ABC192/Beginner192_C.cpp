#include <bits/stdc++.h>
using namespace std;

int fx(int x){
    string g2 = to_string(x);
    sort(g2.begin(), g2.end());
    
    string g1 = g2;
    reverse(g1.begin(), g1.end());

    return stoi(g1) - stoi(g2);
}
int main()
{
    int N, K;
    cin >> N >> K;
    int a = N;
    for (int i = 0; i < K; i++){
        a = fx(a);
    }
    cout << a << endl;
}