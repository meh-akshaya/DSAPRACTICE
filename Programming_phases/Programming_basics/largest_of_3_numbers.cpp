#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter value of these numbers : ";
    cin >> a >> b >>c;
    if (a>=b && a>=c) {
        cout << "largest number is :" << a<<endl;
        }
    else if (b>=a && b>=c) {
        cout << "largest number is :" << b<<endl;
        } 
    else {
        cout << "largest number is :" << c<<endl;
        }
       
}

// can be done with max funtion (#include <algorithm>) )
// algorithm bif has more like min() , sort() etc
