#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the last digit to sum till : ";
    cin >> n;
    int a = 0;
    for (int i=1; i<=n; i+=1) {
        a = a + i;
        
//cout << a <<endl; "ye vaale se ek ek krke har iteration ke liye print hojayega "
    }
    cout << "sum of digits till N is:" << a <<endl;
    
}
//in this problem i leart that : loop ke andar print krne se baar baar sum print hoga , aur bahar print krne se ek baar bas hoga jo ki total sum aayega