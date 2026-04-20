#include <iostream>
#include <map>
#include <unordered_map> 
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<int,int> m;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    for (unordered_map<int,int>:: iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}