//peak in a mountain
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // int arr[4] = {3,4,5,1};

    int start = 0, end = size-1;
    while(start <= end) {
        int mid = (start+end)/2;
        if (arr[mid] < arr[mid+1]) {
            start = mid+1;
        }
        else if (arr[mid] < arr[mid-1]){
            end = mid-1;
        }
        else {
            cout << "Peak is: " << mid << endl;
            break;
        }
    }

    return 0;
}