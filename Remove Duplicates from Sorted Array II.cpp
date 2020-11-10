/*
    Given a sorted array, remove the duplicates in place such that each element appear only once
and return the new length.
    Do not allocate extra space for another array, you must do this in place with constant memory.
    For example, Given input array A = [1,1,2],
    Your function should return length = 2, and A is now [1,2].
*/

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