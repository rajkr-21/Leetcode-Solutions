class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i * i == n) {
                    count += 1; // Perfect square root wala factor
                } else {
                    count += 2; // 2 factors - i, n/i
                }
            }
            if(count > 3) return false; //stop early
        }
        return count == 3;
    }
};