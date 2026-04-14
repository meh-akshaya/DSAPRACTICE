/*
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue <int> q;
    for (int i=0; i< n; i++) {
        int x;
        cin>> x;
        q.push(x);
    }
    int k;
    cin >> k;

    stack <int> s;
    for (int i=0; i<k; i++) {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

}
*/
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue <int> q;
    for (int i=0; i< n; i++) {
        int x;
        cin>> x;
        q.push(x);
    }
    int k;
    cin >> k;

    stack <int> s;
    for (int i=0; i<k; i++) {
        s.push(q.front());
        q.pop();
    }
    queue <int> final;

    while (!s.empty()) {
        final.push(s.top());
        s.pop();
    }
    while (!q.empty()) {
        final.push(q.front());
        q.pop();
    }
    while(!final.empty()) {
        cout << final.front() << " ";
        final.pop();
    }


}
