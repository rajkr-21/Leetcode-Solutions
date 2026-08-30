class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        //get the index of min and max elements
        int MIN = min_element(nums.begin(), nums.end()) - nums.begin();
        int MAX = max_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(MIN, MAX);//which among min or max appears closer to the front of the array
        int right = max(MIN, MAX); //which is present to the back of the array

        int f = right+1; //Remove both from front side
        int b = n - left; //Remove both from back side
        int fb = (left + 1) + (n - right); //Remove one from front and one from back

        return min({f,b,fb});
    }
};