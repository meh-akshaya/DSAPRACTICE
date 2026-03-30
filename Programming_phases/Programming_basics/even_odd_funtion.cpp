#include <iostream>
using namespace std;
int n;
void checkEvenOdd(int n) {
    if (n%2==0) {
        cout << n << "is an even number" << endl;


    }
    else {
        cout << n << "is an odd number" << endl;
    }

}
int main () {
    int n;
    cout << "enter a number: ";
    cin >> n;
    checkEvenOdd(n);
}

// we should first declare the funtion and then call it in the main funtion , otherwise it will give error , other meathod is funtion prototyping.

/*
#include <iostream>
using namespace std;

void greet();        // ⭐ function declaration (prototype)

int main() {
    greet();         // works
}

void greet() {       // function definition later
    cout << "Hello";
}
*/