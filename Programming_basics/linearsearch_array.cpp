/*
#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "enter value of n" << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements of array ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "enter the key " << endl;
    cin >> key;
    int value = 0;
    for (int i=0; i<n; i++ ) {
        if (arr[i] == key) {
            value = value +1;
        }
        }
    if (value > 0) {
        cout << "Found" << endl;
    }
    else {
            cout << "not found" << endl;
        }
    }    
    my code but isme value variable ka use unnecessary hai, isko boolean variable se replace karna chahiye tha, kyunki hume bas ye check karna hai ki key found hai ya nahi, aur agar found hai to hume uski count nahi chahiye, isliye value variable ka use unnecessary hai, isko boolean variable se replace karna chahiye tha, jise hum found naam de sakte hain, aur jab bhi key milti hai to found ko true kar dena chahiye, aur loop ke baad found ko check karna chahiye, agar found true hai to "Found" print karna chahiye, aur agar found false hai to "Not Found" print karna chahiye.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;   // ⭐ stops early
        }
    }

    if (found) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}