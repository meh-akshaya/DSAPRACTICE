#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int x;
    cin >> x;
    int arr[x];
    for (int i=0; i<x; i++) {
        cin >> arr[i];
    }
    unordered_map<int,int> m;
    for (int i=0; i<x; i++ ) {
        m[arr[i]]++;
    }
    for ()

}