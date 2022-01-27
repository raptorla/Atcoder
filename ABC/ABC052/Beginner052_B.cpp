#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;
    int ans = 0, cnt = 0;
    for (int i = 0; i < N; i++){
        if (S[i] == 'I') cnt += 1;
        else cnt -= 1;
        ans = max(cnt,ans);
    }
    cout << ans << endl;
}