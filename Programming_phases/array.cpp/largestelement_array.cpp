/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i=0; i<n; i++) {
        if (arr[i]>largest) {
            largest = arr[i];
        }
    }
    cout << largest << " ";

}
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    int largest = v[0];
    for (int i=0; i<n; i++) {
        if (v[i]>largest) {
            largest = v[i];
        }
    }
    cout << largest << " ";
}