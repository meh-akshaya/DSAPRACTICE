#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> height(N);
    for (int i = 0; i < N; i++) {
        cin >> height[i];
    }

    int i = 0;
    int j = N - 1;
    int ans = 0;

    while (i < j) {
        int h = min(height[i], height[j]);
        int w = j - i;
        int area = h * w;


        ans = max(ans, area);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }

    cout << ans << endl;
    return 0;
}