//replace blank spaces with @40 in strings
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int i = 0;
    while(i < s.length()) {
        if (s[i] == ' ') {
            s.erase(i,1);
            s.insert(i, "@40");
            i += 3;
        }
        else {
            i++;
        }
    }

    cout << "New String is: " << s << endl;
}