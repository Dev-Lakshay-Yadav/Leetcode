class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length = nums.size();
        int j=0;
        for(int i=1;i<length;i++){
            if(nums[i] == nums[j]){
                return true;
            }
            j++;
        }
        return false;
    }
};