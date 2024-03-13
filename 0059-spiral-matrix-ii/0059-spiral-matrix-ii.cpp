class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if (n == 0) return {};

        int row_begin = 0, col_begin = 0;
        int row_end = n - 1, col_end = n - 1;
        int val = 1;
        vector<vector<int>> res(n, vector<int>(n, 0)); 
        
        while (row_begin <= row_end && col_begin <= col_end) {
            for (int i = col_begin; i <= col_end; i++) {
                res[row_begin][i] = val;
                val++;
            }
            row_begin++;
            
            for (int i = row_begin; i <= row_end; i++) {
                res[i][col_end] = val;
                val++;
            }
            col_end--;

            if (row_begin <= row_end) {
                for (int i = col_end; i >= col_begin; i--) {
                    res[row_end][i] = val;
                    val++;
                }
            }
            row_end--;

            if (col_begin <= col_end) {
                for (int i = row_end; i >= row_begin; i--) {
                    res[i][col_begin] = val;
                    val++;
                }
            }
            col_begin++;
        }
        
        return res;
    }
};
