#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 0;
    char ch = 'A';
    while(row < n) {
        int col = 0;
        while(col < n) {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}