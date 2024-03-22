
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1); 
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                
                int ptr = mid;
                while (ptr > 0 && nums[ptr - 1] == target)
                    ptr--;
                ans[0] = ptr;
                
                ptr = mid;
                while (ptr < nums.size() - 1 && nums[ptr + 1] == target)
                    ptr++;
                ans[1] = ptr;
                
                return ans;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};
