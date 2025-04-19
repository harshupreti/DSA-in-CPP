//AP nth term
#include<bits/stdc++.h>
using namespace std;

int aP(int n) {
    return (3*n) + 7;
}

int main() {
    int n;
    cout << "Enter nth term: ";
    cin >> n;

    cout << "nth term is: " << aP(n) << endl;
    return 0;
}