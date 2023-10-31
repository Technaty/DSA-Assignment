#include<iostream>
using namespace std;
int sum(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[0] + sum(arr + 1, n - 1);
    }
}