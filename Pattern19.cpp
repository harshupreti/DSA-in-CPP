#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = n;
    while(row > 0) {
        int col = 0;
        while(col < row) {
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row--;
    }
    return 0;
}