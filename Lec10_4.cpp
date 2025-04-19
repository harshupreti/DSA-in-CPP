//finiding intersection
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size1;
    int size2;

    cout << "Enter size of first array: ";
    cin >> size1;

    cout << "Enter size of second array: ";
    cin >> size2;

    int arr1[100];
    int arr2[100];

    cout << "Enter elements of array 1: ";
    for (int i = 0; i < size1; i++){
        cin >> arr1[i];
    }

    cout << "Enter elements of array 2: ";
    for (int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    cout << "Intersection is: ";
    int i = 0;
    int j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return 0;
}