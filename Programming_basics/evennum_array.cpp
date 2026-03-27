#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "enter value of n "<< endl;
    cin >> n;
    int arr[n];
    cout << "enter elements of array" << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int count =0;
    for (int i=0; i<n; i++) {
        if (arr[i]%2==0) {
            count++;

        }
    }
    cout << "count of even numbers is " << count << endl;
}