#include<iostream>
using namespace std;

// 3. Quadratic Time-complexity-->O(n^2)
void quadraticTC(int *arr, int n){
    /*
    An algorithm has quadratic time complexity when the number of
    operations is proportional to: 'n×n=n^2'
    */

    // nested loops
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i] << arr[j]<<" ";
        }
        cout<<endl;
    }

    /*
    How to Identify O(n²):
    1. Do I have a loop inside another loop?
    2. Does the inner loop depend on n?
    */

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    quadraticTC(arr, n);

    return 0;
}