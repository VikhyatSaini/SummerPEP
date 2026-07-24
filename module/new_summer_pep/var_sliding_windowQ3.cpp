#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,1,0,1,1,0};
    int k=4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int maxLen = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Longest subarray = " << maxLen << endl;

    return 0;
}