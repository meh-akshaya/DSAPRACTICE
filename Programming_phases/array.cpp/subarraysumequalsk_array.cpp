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
    m[0] = 1;  // important

    int prefix = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        prefix += v[i];

        int needed = prefix - k;

        if (m.find(needed) != m.end()) {
            count += m[needed];
        }

        m[prefix]++;
    }

    cout << count;
}