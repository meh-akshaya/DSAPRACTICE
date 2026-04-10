#include <iostream>
#include <stack>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> str;
    for (int i=0; i<s.size(); i++) {
        str.push(s[i]);
    }
    for (int i=0; i<s.size(); i++) {
        cout << str.top();
        str.pop();
    }
}