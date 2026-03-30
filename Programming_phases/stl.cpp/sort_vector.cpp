#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a= {10,49,59,10,40,20};
    sort(a.begin(),a.end());
    for (auto x: a) {
        cout << x<<  " ";
    }

}