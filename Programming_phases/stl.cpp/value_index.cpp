#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main() {
    vector<int> a={10,20,30};
    vector<pair<int,int>> p;
    for (int i=0; i<a.size(); i++) {
        p.push_back({a[i],i});
    }
    for (auto x:p) {
        cout << x.first << " " << x.second << endl;
    }
}