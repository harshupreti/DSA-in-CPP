//algorithms using stl
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,3,6,7,8,9};

    cout << "FInding 6: " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a =3;
    int b = 5;

    cout << "Max is: " << max(a,b) << endl;
    cout << "Min is: " << min(a,b) << endl;

    swap(a,b);
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;

    string harsh = "hiba";
    reverse(harsh.begin(),harsh.end());
    cout << "string is: " << harsh << endl;

    rotate(v.begin(),v.begin()+2,v.end());

    for (int i:v) {
        cout << i << endl;
    }

    cout << endl;

    sort(v.begin(),v.end());
    for (int i:v) {
        cout << i << endl;
    }

    
}