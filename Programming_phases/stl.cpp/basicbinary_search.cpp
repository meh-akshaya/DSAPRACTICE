#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    if(binary_search(a,a+n,k)) {
        cout << "Present";
    }
    else {
        cout << "Not present";
    }
}