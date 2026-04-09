/*
You are given a list of n pairs of integers.
Each pair contains two values: (a, b).

Your task is to sort the list of pairs based on the following rules:

Sort the pairs in ascending order of the first element.
If two pairs have the same first element, then sort them in ascending order of the second element.
*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
bool cmp1 (pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first < b.first;
    }
}
int main() {
    int n;
    cin >> n;
    vector <pair<int,int>> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;    
    }
    sort(v.begin(),v.end(), cmp1);
    for (int i=0; i<n; i++) {
        cout << v[i].first << "  " << v[i].second << " , "; 
    }
    
    
}