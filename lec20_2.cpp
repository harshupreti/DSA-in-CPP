//merge 2 sorted arrays
#include <bits/stdc++.h>
using namespace std;


// int main() {
//     int arr1[] = {1,3,5,7,9};
//     int arr2[] = {2,4,6};

//     int size1 = sizeof(arr1)/sizeof(int);
//     int size2 = sizeof(arr2)/sizeof(int);

//     int arr3[10];
//     int i = 0, j = 0, k = 0;
//     while(i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     if (i == size1) {
//         for (j; j < size2; j++) {
//             arr3[k] = arr2[j];
//             k++;
//         }
//     }
//     else {
//         for (i; i < size1; i++) {
//             arr3[k] = arr1[i];
//             k++;
//         }
//     }

//     cout << "Merged array is: ";
//     for (int n = 0; n < k; n++) {
//         cout << arr3[n] << " ";
//     }
//     cout << endl;
//     return 0;
    
// }

int main() {
    vector<int> v1 = {1,3,5,7,9};
    vector<int> v2 = {2,4,6};

    vector<int> v3;
    v3.reserve(v1.size()+v2.size());
    v1.push_back(INT_MAX);
    v2.push_back(INT_MAX);
    int i = 0, j = 0;

    while(v1[i] != INT_MAX || v2[j] != INT_MAX) {
        if (v1[i] < v2[j]) {
            v3.push_back(v1[i]);
            i++;
        }
        else {
            v3.push_back(v2[j]);
            j++;
        }
    }
    
    cout << "Merged array is: ";
    for (int k:v3) {
        cout << k << " ";
    }
    cout << endl;
    return 0;
    
}