#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    while(row < n) {
        int col = 0;
        char ch = row+65;
        while(col < n) {
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}