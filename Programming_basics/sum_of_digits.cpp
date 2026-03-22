#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter value of num: ";
    cin >> num;
    int sum = 0;
    while (num>0) {
        int a = num%10;
        sum = sum+ a;
        num = num/10;
    }
    cout << "sum of digits in the num is: " << sum << endl;
}
