#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int n;
    cout << "Enter any positive integer: " << endl;
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}