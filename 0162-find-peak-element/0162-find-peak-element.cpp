#include <vector>

class Solution {
public:
    int findPeakElement(std::vector<int>& nums) {
        if (nums.size() == 1) {
            return 0;
        } else if (nums.size() == 2) {
            return nums[0] > nums[1] ? 0 : 1;
        } else {
            int i;
            for (i = 0; i < nums.size(); i++) {
                if (
                    (i == 0 || nums[i - 1] < nums[i]) && 
                (i == nums.size() - 1 || nums[i] > nums[i + 1])
                ) {
                    break;
                }
            }
            return i;
        }
    }
};
