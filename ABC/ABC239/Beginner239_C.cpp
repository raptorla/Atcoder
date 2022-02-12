#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 998244353;

long long countDigits(ll n)
{
    string tmp;

    tmp = to_string(n);
    return tmp.size();
}
long long sum(ll n) {
  if (n == 0) {
    return 0;
  }
 
  // sum関数の中でsum関数を呼び出している
  int s = sum(n - 1);
  return s + n;
}
long long fx(ll n){
	ll s = 0;
	ll leng = countDigits(n);
	string nokori; 
	for(long long i = 0; i < leng-1; i++){
		nokori += "9";
	}
	ll llnokori = stoll(nokori);
	if(n <= 9) return (n + 1) * n / 2;
	else {
		s += (n % mod - pow(10, leng - 1) + 2)  * (n % mod - pow(10, leng - 1) + 1)  / 2 +sum(llnokori) ;
		return s;
	}
	
}

int main(void) {
	ll n;
	cin >> n;
	cout << fx(n) % mod << endl;
	return 0;
}