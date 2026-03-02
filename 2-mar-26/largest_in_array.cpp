#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
int large (int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; ++i){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
int main()
{
    int arr[]{1,23,34,5,4523,3};
    cout << "The largest element of the array is : " << large(arr, 6);
    return 0;
}