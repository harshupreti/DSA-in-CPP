#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    while(row < n) {
        int space = n-row-1;
        while(space > 0) {
            cout<<"  ";
            space--;
        }
        int col= 0;
        while(col <= row) {
            cout<<col+1<<" ";
            col++;
        }
        col = 0;
        int value = row;
        while(col <= row-1) {
            cout<<value<<" ";
            col++;
            value--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}