#include <iostream>
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

    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == x) {
            ans = mid;
            break;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << ans;
}