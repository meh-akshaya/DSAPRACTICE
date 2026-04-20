#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int store[n];
    map<int,int> m;

    // input + frequency
    for (int i = 0; i < n; i++) {
        cin >> store[i];
        m[store[i]]++;
    }

    // find first non-repeating
    for (int i = 0; i < n; i++) {
        if (m[store[i]] == 1) {
            cout << store[i];
            break;
        }
    }
}