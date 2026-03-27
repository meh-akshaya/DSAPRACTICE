#include <iostream>
using namespace std;
int main() {


    int n;
    cout << "enter value of n"<< endl;
    cin >> n;
    int arr[n];
    cout << "enter" << n << "eleements of array" << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];

    } 
    cout << "elements of array are " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } 
}
