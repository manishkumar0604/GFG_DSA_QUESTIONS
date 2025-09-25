class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int prefix=0;
        int maxi=INT_MIN;
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        {
            prefix+=arr[i];
            maxi=max(maxi,prefix);
            if(prefix<0)
                prefix=0;
        }
        return maxi;
    }
};