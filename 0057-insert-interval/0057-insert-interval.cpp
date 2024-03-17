class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;

        int s=intervals[0][0],e=intervals[0][1];
        for(auto v:intervals){
            if(v[0]>e){
                result.push_back({s,e});
                s=v[0];
                e=v[1];
            }
            else if(v[1]>e){
                e=v[1];
            }
        } 
        result.push_back({s,e});
        return result;
    }
};