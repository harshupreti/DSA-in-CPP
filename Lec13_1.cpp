//first and last occurence using binary search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key) {
    if (start <= end) {
        int mid = start + (end-start) / 2;
        if (key == arr[mid]) {
            return mid;
        }
        else {
            if(key > arr[mid]) {
                return binarySearch(arr, mid+1, end, key);
            }
            else {
                return binarySearch(arr, start, mid-1, key);
            }
        }
    }
    return -1;
}

int firstOccurence(int arr[], int size, int key) {
    int first1 = binarySearch(arr, 0, size-1, key);
    int first2 = -1;
    while(first1 != -1) {
        first2 = first1;
        first1 = binarySearch(arr, 0, first1 - 1, key);
    }

    return first2;
}

int lastOccurence(int arr[], int size, int key) {
    int last1 = binarySearch(arr, 0, size-1, key);
    int last2 = -1;
    while(last1 != -1) {
        last2 = last1;
        last1 = binarySearch(arr, last1+1, size-1, key);
    }

    return last2;
}

int main() {
    // int size;
    // cout << "Enter size of array: ";
    // cin >> size;

    // int arr[100];
    // cout << "Enter elements of array: ";
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    int arr[4] = {1,3,3,5};

    cout << "First occurence is: " << firstOccurence(arr, 4, 2) << endl;
    cout << "Last occurence is: " << lastOccurence(arr, 4, 2) << endl;
    return 0;
}