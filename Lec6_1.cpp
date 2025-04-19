#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter a decimal no to convert to binary: ";
    cin>>n;

    int i = 0;
    int ans = 0;
    while (n != 0) {
        int bit = n&1;
        n = n >> 1;
        ans = (bit*pow(10,i))+ans;
        i++;
    }
    cout<<"The binary equivalent is: "<<ans<<endl;
    return 0;
}