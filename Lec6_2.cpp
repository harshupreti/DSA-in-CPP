//negative no to binary
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a negative no (without negative sign): ";
    cin >> n;
    n*=(-1);
    int i = 0;
    int ans = 0;
    while(n != 0) {
        //n = (~n) + 1;
        int bit = n & 1;
        n = n >> 1;

        ans = (bit * pow(10,i)) + ans;
        i++;
    }
    
    ans = ~ans + 1;

    cout<<"The binary equivalent is: " << ans << endl;
}