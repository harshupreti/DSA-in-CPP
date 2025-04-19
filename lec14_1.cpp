//pivot in an array
#include <iostream>
using namespace std;

int main() {
    // int size;
    // cout >> "Enter size of array: ";
    // cin >> size;

    // int arr[100];
    // cout << "Enter elements of array:";
    // for (int i = 0; i < size; i ++) {
    //     cin >> arr[i];
    // }

    int arr[5] = {7,9,1,2,3};
    int start = 0, end = 5-1;
    while(start < end) {
        int mid = (start+end)/2;
        if (arr[mid] < arr[mid-1]) {
            cout << "Pivot is: " << arr[mid];
            break;
        }
        else if (arr[mid] > arr[0]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    return 0;
}