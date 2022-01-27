#include <bits/stdc++.h>

using namespace std;
long long SumOfDigits(long long n){
    long sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    long long N, A, B, ans = 0;
    cin >> N >> A >> B;
    for(int i = 1; i <= N; i++){
        long long sum = SumOfDigits(i);
        if(sum >= A && sum <= B) ans += i; 
    }

    cout << ans << endl;
}
