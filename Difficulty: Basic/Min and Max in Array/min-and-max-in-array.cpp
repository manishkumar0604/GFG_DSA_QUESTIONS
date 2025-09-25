// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int n = arr.size();
        int mini = arr[0], maxi = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < mini) mini = arr[i];
            if (arr[i] > maxi) maxi = arr[i];
        }

        return {mini, maxi};
    }
};
