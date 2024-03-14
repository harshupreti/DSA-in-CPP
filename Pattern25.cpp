#include <iostream>
using namespace std;

void printStar(int col, int value) {
    while(col < value) {
            cout<<"* ";
            col++;
        }
}

int main() {
    int n;
    cin>>n;

    int row = n;
    while(row > 0) {
        int col = 0;
        while(col < row) {
            cout<<col+1<<" ";
            col++;
        }
        col = 0;
        int value = n-row;
        printStar(col,value);
        printStar(col,value);
        int count = row;
        while(col < row) {
            cout<<count<<" ";
            col++;
            count--;
        }
        

        cout<<endl;
        row--;
    }
}