#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (int i=0; i<n; i++) {
        int p = -v[i];
        int j = i+1;
        int k = n-1;
        while (j<k) {
            if (v[j]+v[k]==p) {
                cout << "YES" << endl;
                return 0;
            }
            else if (v[j]+v[k]>p) {
                k--;
            }
            else {
                j++;
            }
        }

    }
    cout << "NO" << endl;
}