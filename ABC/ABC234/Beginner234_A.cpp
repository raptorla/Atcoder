#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    
    long long ft = t*t+2*t+3;
    long long ftplust = ft + t;
    long long fftplust = ftplust*ftplust+2*ftplust+3;
    long long fft = ft *ft + 2*ft + 3;
    long long ans = (fftplust+fft)*(fftplust+fft)+2*(fftplust+fft)+3;
    cout << ans << endl; 
}
