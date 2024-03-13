#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; //n must be less than 4

    int row = 0;
    while(row < n) {
        int col = 0;
        char ch = 'D' - row;
        while(col <= row) {
            cout<<ch++<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}