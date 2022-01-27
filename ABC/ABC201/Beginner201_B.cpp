#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> s(N);
    vector<int> t(N);
        
    for(int i=0; i<N; i++){
        cin >> s[i] >> t[i];
    }
    
    long long first = 0;
    long long second = 0;
    string pos1, pos2;
    for(int i=0; i<N; i++){
        if(t[i] >= first){
            second = first;
            first = t[i];
            pos2 = pos1;
            pos1 = s[i];
        }
        else if(t[i] >= second && t[i] < first){
            second = t[i];
            pos2 = s[i];
        }
    }
    cout << pos2 << endl;
}