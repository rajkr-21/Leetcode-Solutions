class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        for(int i=0; i<n; i++){
            int max = i;
            for(int j=i+1; j<n; j++){
                if(heights[j]> heights[max]) max = j;
            }
            swap(heights[i], heights[max]);
            swap(names[i], names[max]);
        }
        return names;
    }
};