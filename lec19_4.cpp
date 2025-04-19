//list(doubly linked) using stl
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // list<int> n(5,100);
    // for (int i:n) {
    //     cout << i << endl;
    // }

    l.push_back(1);
    l.push_front(2);
    for (int i:l) {
        cout << i << endl;
    }
    l.erase(l.begin());
    for (int i:l) {
        cout <<i<<endl;
    }

    cout << "Size of list: " << l.size() << endl;
}