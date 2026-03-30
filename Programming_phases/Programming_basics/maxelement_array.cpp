#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter value of n" << endl;
    cin >> n;
    int arr[n];
    cout << "enter " << n << " numbers of array " << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if (n==0) {
        cout << "array is empty " << endl;
    
    }
    else {
        int maxelement = arr[0];
        for (int i=1; i<n; i++) {
            if (arr[i] > maxelement) {
                maxelement = arr[i];
            }
        }
        cout << "maximum element of array is " << maxelement << endl;
    } 

}