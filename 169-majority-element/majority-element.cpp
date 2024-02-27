class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> numsCount;
        for (int i = 0; i < nums.size(); ++i)
        {
            numsCount[nums[i]]++;
        }
        int majority = nums.size() / 2;
        for (auto i = numsCount.begin(); i != numsCount.end(); ++i)
        {
            if (i->second > majority)
                return i->first;
        }
        return 0; 
    }
};