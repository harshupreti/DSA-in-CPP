// total no. of set bits in a and b
#include<bits/stdc++.h>
using namespace std;

int setBits(int a, int b) {
    int ones = 0;
    while (a!=0 && b != 0) {
        if( (a&1) == 1) {
            ones++;
        }
        if( (b&1) == 1) {
            ones++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return ones;
}

int main() {
    int a, b;
    cout << "Enter value of a and b: ";
    cin >> a >> b;

    cout << "No. of set bits is: " << setBits(a, b) << endl;
    return 0;
}