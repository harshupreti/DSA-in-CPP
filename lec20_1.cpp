//reverse an array (after m)
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int arr[] = {11,3,5,7,12,4};
//     int size = sizeof(arr)/sizeof(int);
//     int m = 3;

//     for (int i = m+1, j = size-1; i<j; i++,j--) {
//         swap(arr[i],arr[j]);
//     }

//     cout << "New array is: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;

// }

int main() {
    vector<int> v = {11,3,5,7,12,4};
    int m = 3;
    reverse(v.begin()+m+1,v.end());

    cout << "New array is: ";
    for (int i: v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}