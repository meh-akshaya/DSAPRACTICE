#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <=1) {
        return false; 
        }
    else {
        for (int i =2; i<=sqrt(n);i++)
        {
            if(n%i==0){
                cout<<i<<" is a factor of "<<n<<endl;
                return false;
            }
        }
        return true;
    }
}
int main(){
    int n;
    cout<<"Enter the number N ";
    cin>>n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
}   
}