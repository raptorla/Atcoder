#include <bits/stdc++.h>

using namespace std;

string divide[4] = {"dream", "dreamer" , "erase", "eraser"};


int main()
{
    string S;
    cin >> S;
    
    reverse(S.begin(), S.end());
    for (int i = 0; i < S.size(); i++){
        reverse(divide[i].begin(), divide[i].end());
    }
}
