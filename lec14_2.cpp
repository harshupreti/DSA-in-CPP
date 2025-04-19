//finding square root using binary search
#include <iostream>
using namespace std;

int sqaureRoot (int num) {
    int start = 0, end = num;
    int sqrt = 0;
    while(start <= end) {
        int mid = (start+end)/2;
        if (num == mid*mid) {
            sqrt = mid;
            return sqrt;
        }
        else if (num > mid*mid) {
            sqrt = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return sqrt;
}

int main() {
    int num;
    cout << "Enter the number to find square root: ";
    cin >> num;

    cout << "Square root is: " << sqaureRoot(num) << endl;
}