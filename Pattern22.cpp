#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;

    int  row = 0;
    while(row < n) {
        int col = 0;
        int space = n - row-1;
        while(space > 0) {
            cout<<"  ";
            space--;
        }
        while(col <= row) {
            cout<<row+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}