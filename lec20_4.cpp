//move 0s to the right end while preserving the order
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2,0,1,3,0,0,0};
    int j = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0) {
            swap(v[j],v[i]);
            j++;
        }
    }

    cout << "Final array is: ";
    for (int i:v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}