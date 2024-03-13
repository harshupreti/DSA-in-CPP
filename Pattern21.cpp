#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = n;
    while(row > 0) {
        int col = 0;
        int space = n-row;
        while(space > 0) {
            cout<<"  ";
            space--;
        }
        while(col < row) {
            cout<<n-row+1<<" ";
            col++;
        }
        cout<<endl;
        row--;
    }
    return 0;
}