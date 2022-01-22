#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int SumofDegits(int n) {
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int total = 0;
    int sum = SumofDegits(n);
    
    if (n%10!=0)cout << sum << endl;
    else cout << "10" << endl;
}