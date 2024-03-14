#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int prod = 1;
    int sum = 0;
    while(num>0) {
        int remainder = num % 10;
        prod*= remainder;
        sum+= remainder;
        num/= 10;
    }
    cout<<"Difference of Product and Sum is: "<<prod-sum<<endl;
    return 0;
}