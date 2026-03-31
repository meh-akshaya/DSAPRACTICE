#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp (int a , int b) {
    return a>b;
}
int main () {
    vector <int> v = {4,2,7,1};

    sort (v.begin() , v.end() , cmp);
    for (auto x : v) {
        cout << x << " ";
    }
}