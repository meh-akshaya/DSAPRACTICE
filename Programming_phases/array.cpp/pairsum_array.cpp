#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector <int> v(N);
    for(int i=0; i<N;i++) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int i=0;
    int j = N-1;
    while (i<j) {
        if (v[i]+v[j]==k) {
            cout << "YES";
            return 0;
        }
        else if ((v[i]+v[j])>k) {
            j--;
        }
        else if ((v[i]+v[j]<k)) {
            i++;
        }
    }
    cout << "NO";
}