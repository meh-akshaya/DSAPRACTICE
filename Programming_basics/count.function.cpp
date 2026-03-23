#include <iostream>
using namespace std;
int countDigits(int n) {
    if (n==0) {
        return 1;
    }
    else {
    int count = 0;
    while (n>0) {
         
         n = n/10;
         count++;

    }
    return count;
}
    
}
int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;
    int a = countDigits(n);
    cout << "the number of digits in the number is :" << a << endl;
}