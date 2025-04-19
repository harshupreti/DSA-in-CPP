//maps using stl
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m;

    m[1] = "harsh";
    m[2] = "hiba";
    m[13] = "nawab";

    for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(13);

    for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    m.insert({3,"upreti"});

    for (auto i: m) {
        cout << i.first<< " " << i.second << endl;
    }
}