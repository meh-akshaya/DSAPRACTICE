#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k;
    cin >> k;

    map<int, int> m;

    for (int i = 0; i < n; i++) {
        int needed = k - v[i];

        if (m.find(needed) != m.end()) {
            cout << m[needed] << " " << i;
            return 0;
        }

        m[v[i]] = i;
    }

    cout << -1;
}