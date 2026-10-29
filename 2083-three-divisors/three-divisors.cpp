class Solution {
public:
    bool isThree(int n) {
        //M1: Good but bad at big prime numbers
        // int count=0;
        // for(int i=1; i<=n; i++){
        //     if(n % i == 0){
        //         count++;
        //     }
        //     if(count > 3) return false;
        // }
        // return count==3;

        //M2: 
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