#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector <int> v(N);
    vector <int> vf;
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    int sum = 0;
    for (int i=0; i<N; i++) {
        sum = sum + v[i];
        vf.push_back(sum);
    }
    for (int i=0; i<N; i++) {
        cout << vf[i] << " ";
    }
}