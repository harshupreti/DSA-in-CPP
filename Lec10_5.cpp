//pair sum
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array (sorted): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int s;
    cout << "Enter the value of sum: ";
    cin >> s;

    //pair sum implementation
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == s) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}