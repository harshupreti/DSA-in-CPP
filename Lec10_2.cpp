//Finding unique (XOR)
#include <iostream>
using namespace std;

int unique(int arr[], int n) {
    int a = arr[0];
    for (int i = 1; i < n; i++) {
        a = a ^ arr[i];
    }

    return a;
}

int main() {
    int arr[1000];
    int n;

    cout << "Enter size of array (2m+1): ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements is: " << unique(arr, n) << endl;

    return 0;
}