#include<iostream>
using namespace std;

// 1. Linear Time-complexity-->O(n)
void LinearTC(int *arr, int n){
    /* 
    An algorithm has Linear Time Complexity, written as O(n),
    when the number of operations grows directly proportional 
    to the input size 'n'.
    */

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; // Operation is proportional to value of 'n'
    }

    /* 
    Whenever you see one loop whose number of iterations depends on n, think:

    1. for(int i = 0; i < n; i++)
    2. while(i < n)
    3. for(auto x : arr) 

    The complexity is usually: O(n)
    */
}

// 2. Constant Time-complexity-->O(1)
void ConstantTC(int *arr, int n){
    /*
    An algorithm has Constant Time Complexity when the
    number of operations does not depend on the input size 'n'
    */

    // acessing elements
    cout<<arr[0]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[n-1]<<endl;

    // looping fixed number of times
    for(int i = 0; i < 100; i++){
    cout << i<<" ";
    }

    // multiple constant operations
    int x = 10;
    int y = 20;
    int z = x + y;
    cout << z;
    
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);

    LinearTC(arr, n);
    ConstantTC(arr, n);
    return 0;
}