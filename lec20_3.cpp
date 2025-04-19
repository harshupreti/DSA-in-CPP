//merge in single array
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v1 = {1,2,3,0,0,0};
//     vector<int> v2 = {2,5,6};
//     int i = 0;
//     while(v1[i]!=0) {
//         i++;
//     }
//     int j = 0;
//     for (i,j;i<v1.size();i++,j++) {
//         v1[i]=v2[j];
//     }
//     sort(v1.begin(), v1.end());
//     cout << "Merged array is: ";
//     for (int k:v1) {
//         cout << k << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 0, 0, 0}; // v1 has enough space to hold the elements of v2
    vector<int> v2 = {2, 5, 6};
    
    int m = 3; // Number of actual elements in v1
    int n = v2.size(); // Number of elements in v2
    
    int i = m - 1;     // Pointer to the last element of v1's valid part
    int j = n - 1;     // Pointer to the last element of v2
    int k = m + n - 1; // Pointer to the end of the merged array (i.e., last index of v1)

    // Merge in reverse order
    while (i >= 0 && j >= 0) {
        if (v1[i] > v2[j]) {
            v1[k] = v1[i];
            i--;
        } else {
            v1[k] = v2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in v2, copy them
    while (j >= 0) {
        v1[k] = v2[j];
        j--;
        k--;
    }

    // Output the merged array
    cout << "Merged array is: ";
    for (int val : v1) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
