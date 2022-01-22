#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> H(100010);
        
    for(int i=0; i<N; i++){
        cin >> H[i];
    }
    int pos = 0;

    while(pos + 1 < N && H[pos] < H[pos + 1]){
        pos += 1;
    }
    cout << H[pos] << endl;
    return 0;
}