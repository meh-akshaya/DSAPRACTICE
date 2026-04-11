#include <iostream>
#include <stack>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> str;
    if (s.size()%2 == !0) {
        cout << "NO";
    }
    else if {
        for (int i=0; i<s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                str.push(s[i]);
            }
            else {
                if (s[i] == str.top()) {
                    str.pop();
                }
            }
        }
    }

}