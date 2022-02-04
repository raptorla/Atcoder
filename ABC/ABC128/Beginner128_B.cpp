#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    cin >> N;
    vector<tuple<string,int, int>> SP;
    
    for (int i = 0; i < N; i++){
        string s;
        int p;
        cin >> s >> p;
        SP.emplace_back(s, -p, i);
    }
    sort(SP.begin(), SP.end());
    for(int i=0;i<N;i++){
        cout << get<2>(SP[i]) + 1 << endl;
    }

}

