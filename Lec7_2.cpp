//Complement of base 10 integer
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number to complement: ";
    cin >> n;
    if (n == 0) {
        cout << "Complement is: 1";
        return 0;
    }
    int a = n;
    int mask = 0;
    while (a != 0) {
        a = a >> 1;
        mask = (mask << 1) | 1;
    }

    cout << "Complement is: " << (~n & mask) << endl;
    return 0;
}