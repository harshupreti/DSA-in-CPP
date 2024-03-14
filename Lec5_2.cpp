#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int count = 0;
    while(n>0) {
        int remainder = n%10;
        if(remainder == 1) {
            count++;
        }
        n/= 10;
    }
    cout<<"Number of 1's are: "<<count<<endl;
    return 0;
}