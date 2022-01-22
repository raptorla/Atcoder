#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> s(N);
    vector<int> t(N);
        
    for(int i=0; i<s.size(); i++){
        cin >> s[i];
    }
    
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<s.size(); j++){
            if(s[i] == s[j]){
                t[i]++;
            }

        }
        
    }
    int max=0;
    string maxstr;
    for(int i=0; i<t.size(); i++){
        if(max < t[i]){
            max = t[i];
            maxstr = s[i];
        }
    } 
    cout << maxstr << endl;
}