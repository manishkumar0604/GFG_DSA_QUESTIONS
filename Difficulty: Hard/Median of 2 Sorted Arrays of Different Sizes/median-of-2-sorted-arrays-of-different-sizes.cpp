#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        // merge both arrays
        ans.insert(ans.end(), a.begin(), a.end());
        ans.insert(ans.end(), b.begin(), b.end());

        // sort combined array
        sort(ans.begin(), ans.end());

        int s = ans.size();
        if (s == 0) return 0.0;

        int mid = s / 2;
        if (s % 2 == 1)
            return static_cast<double>(ans[mid]);
        else
            return (ans[mid - 1] + ans[mid]) / 2.0;
    }
};
