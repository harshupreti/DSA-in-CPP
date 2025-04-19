//sort 012
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    //sorting implementation
    int i = 0, j = size-1;
    while(i < j) {

        while((arr[i] == 0 || arr[i] == 1) && i < j) {
            i++;
        }

        while(arr[j] == 2 && i < j) {
            j--;
        }

        if(i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

    }
    i = 0;
    while (i < j) {
        while(arr[i] == 0  && i < j) {
            i++;
        }

        while(arr[j] == 1 && i < j) {
            j--;
        }

        if(i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    for(int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}