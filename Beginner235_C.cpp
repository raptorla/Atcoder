#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int N, Q;
    cin  >> N >> Q;
    
    map<int, vector<int> > keep;
    
    
    int a;
    for(int i=0; i<N; i++){
        cin >> a;
        keep[a].push_back(i);
    }
    
    
    int x,y;
    for(int i=0; i<Q; i++){
        cin >> x >> y;
        if(keep[x].size() >= y){
            cout << keep[x][y-1]+1 << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    
}