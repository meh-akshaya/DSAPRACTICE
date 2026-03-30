/*
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a= {1,2,3,4,5};
    int start = 0;
    int end = a.size() - 1;
    while (start<end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for (int i=0; i<5; i++) {
        cout << a[i] << " ";
    }
}
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a = {1,2,3,4,5};
    int start = 0;
    int end = a.size() -1;
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    for (int x : a) {
        cout << x << " ";
    }
}