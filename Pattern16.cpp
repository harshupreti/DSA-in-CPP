#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    while(row < n) {
        int col = 0;
        char ch = 'A' + row;
        while(col <= row) {
            cout<<ch++<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}