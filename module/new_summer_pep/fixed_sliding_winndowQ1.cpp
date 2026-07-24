#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 2, 7, 9, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;
    
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        if (sum > maxSum)
            maxSum = sum;
    }

    cout << "Maximum students recognized in " << k
         << " consecutive minutes = " << maxSum << endl;

    return 0;
}