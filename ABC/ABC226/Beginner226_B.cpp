#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N;
    cin >> N;
    set<vector<int> > st;
    
    for(int i = 0; i < N; i++){
        ll l;
        cin >> l;
        vector<int> v(l);
        for(auto& x: v) {
            cin >> x;
        }
        st.insert(v);
    }
    cout << st.size() << endl;
    return 0;
}