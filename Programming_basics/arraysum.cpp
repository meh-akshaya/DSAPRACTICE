#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    int arr[n]; 
    cout << "enter " << n << "elements of array" << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int sum =0;
    for (int i=0; i<n; i++) {
        sum = sum + arr[i];

    }
    cout << "sum of elements of array is " << sum << endl;
}