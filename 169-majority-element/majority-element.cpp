class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> numsCount;
        for (int i = 0; i < nums.size(); ++i)
        {
            numsCount[nums[i]]++;
        }
        int majority = nums.size() / 2;
        for (auto iter = numsCount.begin(); iter != numsCount.end(); ++iter)
        {
            if (iter->second > majority)
                return iter->first;
        }
        return 0; 
    }
};