//Power of 2
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 1;
    for (int i = 0; i <= 30; i++) {
        
        if (ans == n) {
            cout << "True" << endl;
            return 0;
        }
        
        if (ans < INT_MAX / 2)
        ans = ans * 2;
    }
    cout << "False" << endl;
    return 0;
}