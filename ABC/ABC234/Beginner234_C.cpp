#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k;
    cin >> k;
    stringstream ss;
    ss << bitset<64>(k);
    string s = ss.str();
    cout << s << endl;
}