#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, N, a;
    cin >> X >> N;
    vector<int> p(120);
        
    for(int i = 0; i < N; i++){
        cin >> a;
        p[a] = 1;
    }
    for (int i = 0; i < 60; i++)
	{
		if (!p[X - i])
		{
			cout << X - i << endl;
			break;
		}
		if (!p[X + i])
		{
			cout << X + i << endl;
			break;
		}
	}
	return 0;
}