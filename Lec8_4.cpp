// Fibonnaci Series
#include<bits/stdc++.h>
using namespace std;

void fibonnaci(int n) {
    int a = 0;
    int b = 1;
    int c = a + b;
    cout << a << " " << b << " ";
    
    for(int i = 0; i < n-2; i++){
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
}

int main() {
    int n;
    cout << "Enter the nth term for fibonnaci series: ";
    cin >> n; 

    fibonnaci(n);
}