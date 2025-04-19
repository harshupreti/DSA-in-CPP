//queue using stl
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("I");
    q.push("love");
    q.push("hiba");

    cout << "First element: " << q.front() << endl;
    q.pop();
    cout << "First element: " << q.front() << endl;

    cout << "Size is: " << q.size() << endl;
}