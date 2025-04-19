//SUm of elements in array
#include<iostream>
using namespace std;

int sumOfElements(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int array[100];
    cout << "Enter elements of array" << endl;
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Sum of elements of array is: " << sumOfElements(array, size) << endl;
    return 0;
}