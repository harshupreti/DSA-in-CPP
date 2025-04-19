//rotate k times
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1,7,9,11};
    int k = 2;
    vector<int> v2(v1.size());
    for (int i = 0; i < v1.size(); i++) {
        v2[(i+k) % v1.size()] = v1[i];
    }
    cout << "Array after rotating by k times: ";
    for(int i:v2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}