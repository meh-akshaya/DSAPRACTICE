#include <iostream>
using namespace std;
/*
method one (with loop and if condition)
int main() {

    
    int n;
    cout << "Enter value of N : ";
    cin >> n;
    for( int i=1; i<=n; i++) {
        if (i%2==0)
        cout<< i << " " <<endl;
    }
}
*/
int main() {
    int n;
    cout << "enter the value of N: ";
    cin >> n;
    for(int i=2; i<=n; i+=2) {
        cout << i << endl;

    }
}