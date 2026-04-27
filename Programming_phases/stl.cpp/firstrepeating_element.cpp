#include <iostream>
#include <map>
using namespace std;
int main() {
    int x;
    cin >> x;
    int arr[x];
    for (int i=0; i<x; i++) {
        cin >> arr[i];
    }
    map<int,int> m;
    for (int i=0; i<x; i++ ) {
        m[arr[i]]++;
    }
    for (int i=0; i<x; i++) {
        if (m[arr[i]]>1) {
            cout << arr[i] << " ";
            break;
        }
    }
}