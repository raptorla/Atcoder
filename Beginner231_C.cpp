#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> a(N);
    vector<int> x(Q);
    vector<int> answer(N);

    for(int i=0; i<a.size(); i++){
        cin >> a[i];
    }    
    for(int i=0; i<x.size(); i++){
        cin >> x[i];
    }
    sort(a.begin(), a.end());
    
    size_t len =a.size();
    
    for(int i=0;i<Q;i++) {
        auto iter_lower = lower_bound(a.begin(), a.end(), x[i]);
        
        long idx_lower = distance(a.begin(), iter_lower); 
        
        cout << len - idx_lower << "\n";  

    
    
    }
    return 0;
}
