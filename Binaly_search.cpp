#include <bits/stdc++.h>

using namespace std;

int BinalySearch(vector<int> vec, int key){
    int left = 0, right = vec.size(), mid = 0;
    
    while(left < right){
        mid = (left + right) / 2;
        if(key == vec[mid]){
            return 1;
        }
        else if(key < vec[mid]){
            right = mid;
        }
        else if(key > vec[mid]){
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {3, 1, 4, 6, 5, 2};
    sort(vec.begin(), vec.end());
    cout << BinalySearch(vec,7) << endl;

}
