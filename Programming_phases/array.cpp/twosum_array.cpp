#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector <int> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    map <int,int> m;
    int target;
    cin >> target;
    for (int i=0; i<N; i++) {
        int num = target-v[i];
        if (m.find(num) != m.end()) {
            cout << m[num] << " " << i;
            return 0;
        }
        m[v[i]]=i;
    }
    cout << -1;
}
