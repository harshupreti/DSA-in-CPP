//Book allocation problem
#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int students, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < size; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > students || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}

int main() {
    int arr[4] = {10,20,30,40};
    int m = 2;
    
    int start  = 0;
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int end = sum;
    int mid = (start+end)/2;
    while (start <= end) {
        if (isPossible(arr,4,m,mid)) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = (start+end)/2;
    }

    cout << "Min is: " << ans << endl;
}