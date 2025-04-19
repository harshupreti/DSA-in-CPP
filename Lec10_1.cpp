//swap alternate
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[50];
    int n;

    //Taking input size of array
    cout << "Enter no of elements of array: ";
    cin >> n;

    //Taking elements of array
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Swapping alternate
    if (n > 2) {
        for(int i = 0; i + 1 < n; i += 2) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    //Printing the new array
    printArray(arr, n);
    
    return 0;
}