#include <bits/stdc++.h>
using namespace std;

int to_oct(int n){
  string s;
  while(n){
    s = to_string(n%8) + s;
    n /= 8;
  }
  return stoi(s);
}



