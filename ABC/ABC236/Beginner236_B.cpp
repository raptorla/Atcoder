#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,X;
    cin >> N;
    int t = 4 * N;
    vector<int> A(t);
    
    for(int i=1; i < t; i++){
        cin >> X;
        A[X] += 1;
    }
    for(int i=0; i<=N; i++){
        if(A[i] == 3)cout << i << endl;
        
    }
    return 0;
}