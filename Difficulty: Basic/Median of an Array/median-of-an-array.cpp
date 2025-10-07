#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedian(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return 0.0;          // handle empty input safely

        // Sort the array (O(n log n)). This is simple and correct.
        sort(arr.begin(), arr.end());

        int mid = n / 2;
        if (n % 2 == 1) {
            // odd length -> middle element
            return static_cast<double>(arr[mid]);
        } else {
            // even length -> average of two middle elements
            return (static_cast<double>(arr[mid - 1]) + static_cast<double>(arr[mid])) / 2.0;
        }
    }
};
