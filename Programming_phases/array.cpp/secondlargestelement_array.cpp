#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x;
    cin >> x;
    vector <int> p(x);
    for (int i=0; i<x; i++) {
        cin >> p[i];
    }
    int largest = p[0];
    int slargest = p[0];
    for (int i=0; i<x; i++) {
        if (p[i] > largest) {
            slargest = largest;
            largest = p[i];

        }
        if (p[i]!=largest && p[i]>slargest) {
            slargest= p[i];
        }
        
    }
    cout << slargest << " ";
}