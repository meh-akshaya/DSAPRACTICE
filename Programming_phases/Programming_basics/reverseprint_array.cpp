#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter vlaue of n "<< endl;
    cin >> n;
    int arr[n];
    cout << "enter " << n << "elements of array" << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "elements of array are ";
    for (int i=n-1; i>=0; i--) {
        cout << arr[i] << " ";
    } 
} 