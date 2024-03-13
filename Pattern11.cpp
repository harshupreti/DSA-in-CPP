#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    while(row < n) {
        int col = 0;
        while(col < n) {
            char ch = col+65;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}