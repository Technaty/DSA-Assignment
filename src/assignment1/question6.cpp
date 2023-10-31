# include <iostream>
using namespace std;
int Max(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main(){

int arr[] = {10,20,30,3,2,5};
int size = 6;
cout<<Max(arr, size);

return 0;
}