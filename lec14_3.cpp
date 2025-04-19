//search in a sorted and rotated array
#include <iostream>
using namespace std;

int Pivot(int arr[], int size) {
    int start = 0, end = size-1;
    while(start < end) {
        int mid = (start+end)/2;
        if (arr[mid] < arr[mid-1]) {
            return mid;
        }
        else if (arr[mid] > arr[0]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];
    cout << "Enter elements of array:";
    for (int i = 0; i < size; i ++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    // int arr[5] = {7,9,1,2,3};
    // int key = 4;
    int pivot = Pivot(arr, 5);

    if (key < arr[0]) {
        int start = pivot, end = size-1;
        while(start <= end) {
            int mid = (start+end)/2;
            if (key == arr[mid]) {
                cout << "Key found at index: " << mid << endl;
                return 0;
            }
            else if (key > arr[mid]) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
    }
    else {
        int start = 0, end = pivot-1;
        while(start <= end) {
            int mid = (start+end)/2;
            if (key == arr[mid]) {
                cout << "Key found at index: " << mid << endl;
                return 0;
            }
            else if (key > arr[mid]) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
    }

    cout << "Key not found" << endl;
    return 1;
}