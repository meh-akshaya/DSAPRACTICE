#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main() {
    vector<pair<int , int>> a = {{1,10},{2,20},{3,30}};
    for(auto x: a) {
        cout << x.first << " "<< x.second << endl;
    }
}