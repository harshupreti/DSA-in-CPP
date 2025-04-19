//maximum occuring character
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    vector<int> arr(26,0);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int num = s[i] - 'a';
            arr[num]++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            int num = s[i] - 'A';
            arr[num]++;
        }
    }
    int m = 0, max_value = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            m = i;
        }
    }

    cout << "Max occ character is: " << char('a' + m) << endl;
}