#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    int count = 1;
    while(row < n) {
        int col = 0;
        while(col <= row) {
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}