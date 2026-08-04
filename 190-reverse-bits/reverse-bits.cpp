class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        
        for (int i = 0; i < 32; i++) {
            // Get the least significant bit (LSB) of the current number
            int lsb = n & 1;
            
            // Shift that bit to its mirror position on the left side
            int reverseLsb = lsb << (31 - i);
            
            // Merge the shifted bit into our final result
            result = result | reverseLsb;
            
            // Shift the original number right to process the next bit
            n = n >> 1;
        }
        
        return result;
    }
};