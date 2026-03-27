#include <iostream>
using namespace std;
int power(int a, int b) {
    int result = 1;
    for (int i = 1; i<=b; i++) {
        result = result *a;
    }
    return result;

}
int main () {
    int a,b;
    cout << "Enter value of base number a and value of power b: ";
    cin >>a >>b;
    int d = power(a,b);
    cout << a << "raised to the power " << b << " is " << d << endl;
}