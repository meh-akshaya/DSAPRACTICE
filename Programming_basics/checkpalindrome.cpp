#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter a number : ";
    cin >> num;
    int originalNum = num;
    int n = 0;
    while (num>0 ) {
        int a = num%10;
        n = n*10 + a;
        num = num/10;

    }
    if (originalNum == n) {
        cout << "Number " << originalNum << " is a palindrome " << endl;

    }
    else {
        cout << " number " << originalNum << " is not a palindrome " << endl;
        }

    }
