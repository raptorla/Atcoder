#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;
    int a, b, c, d;
    a = N/1000;
    b=(N-a*1000)/100;
    c=(N-a*1000-b*100)/10;
    d=(N-a*1000-b*100-c*10);
    if(a-b-c-d==7) cout << a<<"-"<<b<<"-"<<c<<"-"<<d<<"=7" << endl;
    else if(a-b-c+d==7) cout << a<<"-"<<b<<"-"<<c<<"+"<<d<<"=7" << endl;
    else if(a-b+c-d==7) cout << a<<"-"<<b<<"+"<<c<<"-"<<d<<"=7" << endl;
    else if(a-b+c+d==7) cout << a<<"-"<<b<<"+"<<c<<"+"<<d<<"=7" << endl;
    else if(a+b-c-d==7) cout << a<<"+"<<b<<"-"<<c<<"-"<<d<<"=7" << endl;
    else if(a+b-c+d==7) cout << a<<"+"<<b<<"-"<<c<<"+"<<d<<"=7" << endl;
    else if(a+b+c-d==7) cout << a<<"+"<<b<<"+"<<c<<"-"<<d<<"=7" << endl;
    else if(a+b+c+d==7) cout << a<<"+"<<b<<"+"<<c<<"+"<<d<<"=7" << endl;
}