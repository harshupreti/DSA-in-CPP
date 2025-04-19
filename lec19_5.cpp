//stack using stl
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;

    s.push("I");
    s.push("love");
    s.push("hiba");
    
    cout << "Element at top: " << s.top() << endl;
    s.pop();
    cout << "Element at top: " << s.top() << endl;
    cout << "Empty or not: " << s.empty() << endl;
    cout << "Size of stack: " << s.size() << endl;
}