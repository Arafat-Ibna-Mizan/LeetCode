class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int e = points[0][1];
        int cnt = 0;
        for (auto v : points) {
            if (v[0] > e) {
                cnt++;
                e = v[1];
            }
        }
        cnt++;

        return cnt;
    }
};
