/*
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    int A,B;
    cin >> A >> B;
    vector <int> va(A);
    vector <int> vb(B);
    for (int i=0; i<A; i++) {
        cin >> va[i];
    }
    for (int i=0; i<B; i++){
        cin >> vb[i];
    }
    for (int i=0; i<B; i++) {
        va.push_back(vb[i]);
    }
    sort(va.begin(),va.end());
    for (int i=0; i<A+B; i++){
        cout << va[i] << " ";
    }
}*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    int A,B;
    cin >> A >> B;
    vector <int> va(A);
    vector <int> vb(B);
    vector <int> v;
    for (int i=0; i<A; i++) {
        cin >> va[i];
    }
    for (int i=0; i<B; i++){
        cin >> vb[i];
    }
    int i =0;
    int j =0;
    while (i<A && j<B) {
        if (va[i]<=vb[j]){
            v.push_back(va[i]);
            i++;
        }
        else {
            v.push_back(vb[j]);
            j++;
        }
    }
    while (i<A) {
        v.push_back(va[i]);
        i++;
    }
    while (j<B) {
        v.push_back(vb[j]);
        j++;
    }
    
    for (int i=0; i<A+B; i++){
        cout << v[i] << " ";
    }
}