#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    while(row < n) {
        int col = 0;
        int count = row+1;
        while(col <= row) {
            cout<<count--<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}