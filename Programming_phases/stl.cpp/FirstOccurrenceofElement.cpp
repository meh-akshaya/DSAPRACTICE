#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    int lb = lower_bound(a, a + n, x) - a;
    int ub = upper_bound(a, a + n, x) - a;

    int count = ub - lb;

    cout << count;
}