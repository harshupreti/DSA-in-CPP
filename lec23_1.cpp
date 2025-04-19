//row-wise sum in 2d array
#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

int main() {
    int arr[ROWS][COLS] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << "Row-wise sum is: " << endl;
    for (int i = 0; i < ROWS; i++) {
        int sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i+1 << ": " << sum << endl;
    }

    return 0;
}