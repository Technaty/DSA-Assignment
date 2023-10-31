#include<iostream>
using namespace std;

void rotate(int arr[], int n, int k){
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main(){
    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = 6;
    int k = 2;
    rotate(arr, n, k);
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}