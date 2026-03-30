/*
#include <iostream>
using namespace std;
void factorial(int n) {
    int a = 1;
    for (int i=1; i<=n; i++) {
        a = a*i;
        
    }
    cout << "factorial of " << n << " is " << a << endl; 
}
int main () {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    factorial(n);
}

is meathod m funtion ke andar print krrhe , better hoga ki main ke andar print kren aur funtion ke andar return krke store kren.
*/

#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact*i;

    }
    return fact;
}

int main () {
    int n;
    cout << "enter value of n: ";
    cin >> n;
    int a = factorial(n);
    cout << "factorial of " << n << " is " << a << endl;
}