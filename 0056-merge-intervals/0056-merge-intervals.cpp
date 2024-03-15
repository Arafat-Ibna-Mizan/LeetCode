class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>result;
    sort(begin(intervals),end(intervals));
    int s=intervals[0][0],e=intervals[0][1];
    for(auto v:intervals)
    {
        if(v[0]>e)
        {
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