class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k=max_element(nums.begin(),nums.end())-nums.begin();
        int left,right;
        if(target<=nums[k]&& target>=nums[0]){
            left=0,right=k;

        }
        else{
            left=k+1;
            right=nums.size()-1;

        }
        while(left<=right){
            int mid=(left+right)/2;
            if (nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return -1;

        
    }
};