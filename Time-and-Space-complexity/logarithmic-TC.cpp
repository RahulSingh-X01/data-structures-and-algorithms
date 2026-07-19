#include<iostream>
using namespace std;

int logarithmicTC(int *arr, int n){
    /*
    In O(log n), you reduce the problem size by a constant factor (usually half)
    after each
    */

    // for(int i=1;i<n;i*=5)
    // for(int i=n;i>1;i/=10)

    /*
    Rule of Thumb:
    How is the loop variable changing?
    1. if i *= k
    2. if i /= k
    Think Logarithmic.
    */

    int low = 0;
    int high = n - 1;
    int target = 5;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid;

        else if(arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);

    cout<<logarithmicTC(arr, n);

    return 0;
}