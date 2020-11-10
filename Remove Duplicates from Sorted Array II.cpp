class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int new_index = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[new_index])
                nums[++new_index] = nums[i];
        }
        return new_index+1;
    }
};

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return distance(nums.begin(),unique(nums.begin(),nums.end()));
    }
};
*/