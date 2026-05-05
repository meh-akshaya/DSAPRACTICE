#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    int k = 1;
    vector <int> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    for (int i=1; i<N; i++) {
        if (v[i]!=v[i-1]) {
            v[k] = v[i];
            k++;
        }
    }
    cout << k << endl;
    for (int i=0; i<k; i++) {
        cout << v[i] << " ";
    }
}