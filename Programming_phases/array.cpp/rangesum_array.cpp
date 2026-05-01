#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector <int> v(N);
    vector <int> vsum;
    int sum = 0;
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    for (int i=0; i<N; i++){
        sum = sum + v[i];
        vsum.push_back(sum);
    }
    
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int L,R;
        int range =0;
        cin >> L >> R;
        if (L!=0) {
            range = vsum[R] - vsum[L-1];
        }
        else {
            range = vsum[R];
        }
        cout << range << endl;
    }
}