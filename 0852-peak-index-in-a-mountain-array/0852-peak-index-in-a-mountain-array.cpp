class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=1, end = arr.size() - 2;
        while(start <= end){
            int pivot = start + (end - start)/2;

            if(arr[pivot -1 ] < arr[pivot] && arr[pivot + 1] < arr[pivot]) return pivot;
            else if (arr[pivot-1] < arr[pivot]) start = pivot + 1;
            else end = pivot - 1;
        }
        return -1;
    }
};