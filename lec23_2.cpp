//Largest Row Sum
#include <bits/stdc++.h>
using namespace std;

#define ROWS 3
#define COLS 4


int main() {
    int arr[ROWS][COLS] = {1,2,3,4,5,6,7,8,9,10,11,12};
    vector<int> v;

    for (int i = 0; i < ROWS; i++) {
        int sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
        v.push_back(sum);
    }

    auto iter = max_element(v.begin(), v.end());

    cout << "Row with largest sum is :" << distance(v.begin(), iter) + 1 << endl;
}