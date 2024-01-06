class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumArr = 0;
        for(int i = 0; i<nums.size(); i++){
            sumArr +=nums[i];
        }
        int n = nums.size();
        int totalSum = (n*(n+1))/2;
        
        return (totalSum - sumArr);
    }
};