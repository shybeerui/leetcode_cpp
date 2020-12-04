# Binary Search
## stl库
### lower_bound  
若序列中存在value，则输出该value的最小下标；若不存在，则输出第一个大于该value的值的下标或者序列的size-1。  
可自定义比较函数。  
template< class ForwardIt, class T, class Compare >  
ForwardIt lower_bound( ForwardIt first, ForwardIt last, const T& value, Compare comp );  
### upper_bound  
若序列中存在value，则输出该value的最大下标；若不存在，则输出第一个大于该value的值的下标或者序列的size-1。  
template< class ForwardIt, class T, class Compare >  
ForwardIt upper_bound( ForwardIt first, ForwardIt last, const T& value, Compare comp );  
## 由leetcode34. Find First and Last Position of Element in Sorted Array引发的思考
### Find First Position  
    int findLeft(vector<int>& nums, int target){  
        int l = 0, r = nums.size()-1;  
        int mid = 0;  
    
        while (l < r) {  
            mid = l+(r-l)/2;        //保证最终mid=l  
            if (nums[mid] < target)  
                l = mid+1;          //若存在：保证l为左起第一个满足nums[l]==target的位置 
            else  
                r = mid;            //若存在：保证nums[r]=target
        }  
  
        if (nums[l] == target)  
            return l;  
        else  
            return -1;  
    }  
### Find Last Position  
    int findRight(vector<int>& nums, int target){  
        int l = 0, r = nums.size()-1;  
        int mid = 0;  
  
        while (r > l) {  
            mid = r-(r-l)/2;        //保证最终mid=r  
            if (nums[mid] > target)  
                r = mid-1;          //若存在：保证r为右起第一个满足nums[l]==target的位置   
            else  
                l = mid;            //若存在：保证nums[l]=target  
        }  
  
        if (nums[r] == target)  
            return r;  
        else  
            return -1;  
    }  
    