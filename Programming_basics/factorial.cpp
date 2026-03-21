#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter value of n : ";
    cin >> n;
    int a = 1;
    for(int i=1; i<=n; i++) {
        a =a*i;
    }
    cout << "factorial of n is : " << a << endl;
    
}

// i learnt doing dry run here and where should i place my condition