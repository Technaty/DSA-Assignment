#include<iostream>
using namespace std;
int arr;
int n;
int sum(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[0] + sum(arr + 1, n - 1);
    }
}
int main(){
int arr[]={10,20,30,40,50};
int n=5;
cout<<"sum of the elements of the array is: "<<sum(arr,n)<<endl;
}