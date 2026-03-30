#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter value of num: ";
    cin >>num;
    int n = 0;
    while (num>0 ) {
    int a = num%10;
    n = n*10 + a;
    num = num/10;    
    }
    cout << "reverse of number is :" << n << endl;

}

//Reverse Number , Digit Problems
