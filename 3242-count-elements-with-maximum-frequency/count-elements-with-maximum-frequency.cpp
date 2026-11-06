class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0}; 
        int maxFreq = 0;
        int totalFreq = 0;
        
        for (int x : nums) {
            freq[x]++;
            
            if (freq[x] > maxFreq) {
                maxFreq = freq[x];
                totalFreq = maxFreq; 
            } 
            else if (freq[x] == maxFreq) {
                totalFreq += maxFreq;
            }
        }
        return totalFreq;
    }
};
