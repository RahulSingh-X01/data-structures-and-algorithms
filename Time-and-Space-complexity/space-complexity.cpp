#include<iostream>
#include<vector>
using namespace std;

/*
Space complexity is the amount of memory (RAM)
an algorithm uses as the input size grows.
*/

// 1. Constant Space — O(1)
int sumArray(vector<int>& arr) {
    int sum = 0;          // One variable
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

// 2. Linear Space — O(n)
vector<int> copyArray(vector<int>& arr) {
    vector<int> copy;

    for (int i = 0; i < arr.size(); i++) {
        copy.push_back(arr[i]);
    }

    return copy;
}

// 3. Quadratic Space — O(n²)
vector<vector<int>> createMatrix(int n) {

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    return matrix;
}

// 4. Logarithmic Space — O(log n)
int binarySearch(vector<int>& arr, int low, int high, int target) {

    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
        return binarySearch(arr, low, mid - 1, target);

    return binarySearch(arr, mid + 1, high, target);
}

int main(){

    vector<int> arr = {1,2,3,4,5};
    vector<int> arr2 = {2,4,6,8,10,12,14,16};
    cout << sumArray(arr);
    vector<int> ans = copyArray(arr);
    vector<vector<int>> mat = createMatrix(5);
    cout << binarySearch(arr, 0, arr2.size() - 1, 10);


    return 0;
}