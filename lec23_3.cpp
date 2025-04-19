//Wave print problem
#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

int main() {
    int arr[ROWS][COLS] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << " Wave print: ";
    for (int j = 0; j < COLS; j++) { 
        if (j % 2 == 0) { // Even rows
            for (int i = 0; i < ROWS; i++) { // Top to bottom
                cout << arr[i][j] << " ";
            }
        }
        else { // Odd Rows
            for (int i = ROWS-1; i >=0; i--) { // Bottom to top
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}