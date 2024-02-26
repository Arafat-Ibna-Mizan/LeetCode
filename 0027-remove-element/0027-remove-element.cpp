class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
    
    int len=nums.size();
    for(int i=0;i<len;i++){
        if(val!=nums[i]){
           temp.push_back(nums[i]);
        }

    }
    int i;
    for(i=0;i<temp.size();i++){
       nums[i]=temp[i];
    }
    return i;
    }
};