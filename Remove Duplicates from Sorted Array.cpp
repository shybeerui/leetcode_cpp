class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        if (sz < 2) return sz;
        
        int new_index = 1;
        for (int i = 2; i < sz; i++) {
            if (nums[i] != nums[new_index-1])
                nums[++new_index] = nums[i];
        }
        return new_index+1;
    }
};