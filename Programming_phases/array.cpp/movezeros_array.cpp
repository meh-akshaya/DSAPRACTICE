#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector <int> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    int k = 0;
    // int count = 0;
    // for (int i=0; i<N; i++) {
    //     if (v[i]==0) {
    //         v.erase(v.begin(), v.end(), '0');
    //         count++;
    //     }
    // }
    // for (int i=0; i<count; i++) {
    //     v.push_back(0);
    // }
    // for (int i=0; i<N; i++) {
    //     cout << v[i] << " ";
    // }
    for (int i=0; i<N; i++) {
        if(v[i]!=0) {
            v[k] = v[i];
            k++;
        }
    }
    for (int i=k; i<N; i++) {
        v[i] = 0;
    }
    for (int i=0; i<N; i++) {
        cout << v[i] << " ";
    }
    
}