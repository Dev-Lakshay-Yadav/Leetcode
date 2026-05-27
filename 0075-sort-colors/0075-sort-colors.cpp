class Solution {
public:
    void sortColors(vector<int>& nums) {
    int countZero=0, countOne=0, countTwo=0;
    int n = nums.size();

    for(int i = 0;i<n;i++){
        if(nums[i] == 0) countZero++;
        else if(nums[i] == 1) countOne++;
        else if(nums[i] == 2) countTwo++;
        else continue;
    }
    for (int i=0 ;i<n ; i++){
        if(countZero > 0){
            nums[i] = 0;
            countZero--;
            continue;
        }
        else if(countOne > 0){
            nums[i] = 1;
            countOne--;
            continue;
        }
        else if(countTwo > 0){
            nums[i] = 2;
            countTwo--;
            continue;
        }
        else{
            continue;
        }
    }
    }
};