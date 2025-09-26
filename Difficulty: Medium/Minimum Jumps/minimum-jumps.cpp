class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;      // already at the end
        if (arr[0] == 0) return -1; // cannot move anywhere
        
        int maxReach = arr[0];  // farthest index we can reach
        int steps = arr[0];     // steps left in current jump
        int jumps = 1;          // we must take at least one jump

        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps;  // reached end

            maxReach = max(maxReach, i + arr[i]); // update farthest reach
            steps--; 

            if (steps == 0) { // need a new jump
                jumps++;
                if (i >= maxReach) return -1; // stuck, can't go further
                steps = maxReach - i; // reset steps
            }
        }
        return -1;
    }
};
