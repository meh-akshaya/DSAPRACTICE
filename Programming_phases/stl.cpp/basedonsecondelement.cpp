#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
bool cmp (pair<int,int> a,pair <int,int> b) {
    return a.second < b.second;
}
int main() {
    int x;
    cin >> x;
    vector <pair<int,int>> v;
    for (int i=0; i<x; i++ ) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort (v.begin() , v.end() , cmp);
    for (int i=0; i<x; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

}