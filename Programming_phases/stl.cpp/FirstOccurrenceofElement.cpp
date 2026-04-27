#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x;
    cin >> x;
    int arr[x];
    for (int i=0; i<x; i++) {
        cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int element;
    cin >> element;
    int p= lower_bound(arr,arr+x,element) - arr;
    int q= upper_bound(arr,arr+x,element) - arr;
    cout << q-p << endl;
}