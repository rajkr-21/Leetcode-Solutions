class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(arr[mid]< arr[mid+1]){
                start = mid+1;
            } else {
                end = mid;
            }
        }
        return start;
    }
};

// class Solution {
//     public int peakIndexInMountainArray(int[] nums) {
//         int l = 0, h = nums.length-1;
//         while(l < h){
//             int mid = l + (h - l) / 2;
//             if(nums[mid] < nums[mid+1]){
//                 l = mid + 1;
//             }
//             else{
//                 h = mid;
//             }
//         }
//         return l;
//     }
// }
