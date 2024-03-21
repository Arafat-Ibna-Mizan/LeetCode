class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        bool ans = false;
        for (int i = 0; i < matrix.size(); ++i) {
            int left = 0, right = matrix[i].size() - 1; 
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (matrix[i][mid] == target) {
                    ans = true;
                    return ans;
                }
                if (target < matrix[i][mid]) {
                    right = mid - 1; 
                } else {
                    left = mid + 1;
                }
            }
        }
        return ans;
    }
};