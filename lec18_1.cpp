//insertion sort
#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int arr[] = {14, 2, 7, 5, 19, 9};
    int size = 6;

    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < size-1; i++) {
        int temp = arr[i+1];
        int j = i;

        for (j; j >=0; j--)  {
            if (arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end-start).count();

    cout << "Execution time: " << duration << " nanoseconds" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}