class Solution {
public:
    int maxProduct(int n) {
        vector<int> digit;
        
        //digits extract karo
        while (n > 0) {
            digit.push_back(n % 10);
            n /= 10;
        }
        
        int ans = 0;
        int s = digit.size();
        
        // Compare every unique pair of digits
        for (int i = 0; i <s; i++) {
            for (int j = i + 1; j < s; j++) {
                ans = max(ans, digit[i] * digit[j]);
            }
        }
        return ans;
    }
};
