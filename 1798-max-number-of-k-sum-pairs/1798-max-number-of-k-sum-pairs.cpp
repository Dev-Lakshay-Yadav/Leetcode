class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        int start=0 , end = n-1;
        while(start<end)
        {
            int sum = nums[start] + nums[end];
            if(sum == k)
            {
                ans++;
                start++;
                end--;
            }
            else if(sum > k){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
};