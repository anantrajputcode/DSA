#include <iostream>
#include <climits>
using namespace std;

int smallest(int arr[], int n) {
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    return minVal;
}

int main() {
    int arr[] = {12, 45, 2, 19, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest element: " << smallest(arr, n);

    return 0;
}