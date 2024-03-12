#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 0;
    int count = 1;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}