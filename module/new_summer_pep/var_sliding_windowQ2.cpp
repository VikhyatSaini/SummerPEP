#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++) {
        if (arr[right] == 1) {
            left = right + 1;
        } else {
            maxLen = max(maxLen, right - left + 1);
        }
    }

    cout << "Longest stretch of consecutive 0s = " << maxLen << endl;

    return 0;
}