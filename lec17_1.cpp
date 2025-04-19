//bubble sort
#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int arr[] = {14, 2, 7, 5, 19, 9};
    int size = 6;

    auto start = chrono::high_resolution_clock::now();

    
    for (int i = 0; i < size-1; i++) {
        bool swapped = false;
        for (int j = 0; j < size-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start).count();

    cout << "Execution time: " << duration << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



