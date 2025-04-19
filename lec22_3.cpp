//to remove substring form a string
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the string: ";
    string s;
    getline(cin, s);
    cout << "Enter the part to remove: ";
    string part;
    getline(cin, part);

    while(s.length() !=0 && s.find(part) != string::npos) {
        int pos = s.find(part);
        s.erase(pos,part.length());
    }

    cout << "New string is: " << s << endl;
}