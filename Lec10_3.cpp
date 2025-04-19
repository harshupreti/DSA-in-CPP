//finding all duplicates in an array
//Limitation: the range of values of array must be between 1 to n
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int size;
    cout << "Enter no of elements: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";
    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]) - 1;

        if(arr[index] < 0) {
            cout << abs(arr[i]) << " ";
        }
        else {
            arr[index] = -arr[index];
        }
    }
    cout << endl;
    return 0;
}