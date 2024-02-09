class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        // vector<int>v;
        // int n= nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //        if(nums[j] % nums[i] == 0){
        //            if(nums[j]==n-1)
        //            v.push_back(nums[i]);
        //        } 
        //     }
        // }
        // return v;
        int n = nums.size();
        if (n == 0) return {};

        sort(nums.begin(), nums.end()); 
        vector<int> dp(n, 1); 
        vector<int> prev(n, -1); 
        int maxLen = 1, maxIdx = 0; 
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if (dp[i] > maxLen) {
                maxLen = dp[i];
                maxIdx = i;
            }
        }
        vector<int> result;
        while (maxIdx != -1) {
            result.push_back(nums[maxIdx]);
            maxIdx = prev[maxIdx];
        }
        
        return result;
    }
};