#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b;
    cin >> a >> b;
    int tempA = 0;
    int tempB = 0;
    bool flag = false;
    while(a>0||b>0){
      tempA = a % 10;
      tempB = b % 10;
      if(tempA + tempB >= 10){
        flag = true;
        break;
      }
      a /= 10; 
      b /= 10;
    }
    if(flag){
      cout << "Hard" << endl; 
    }
    else{
      cout << "Easy" << endl;
    }
    return 0;
}