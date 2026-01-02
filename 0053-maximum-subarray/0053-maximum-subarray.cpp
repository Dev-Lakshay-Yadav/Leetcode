class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN,cur_sum=0;
        for(int i=0; i<n ;i++){
            cur_sum += nums[i];
            max_sum = max(max_sum,cur_sum);
            if(cur_sum<0) cur_sum=0;
        }
        return max_sum;
    }
};