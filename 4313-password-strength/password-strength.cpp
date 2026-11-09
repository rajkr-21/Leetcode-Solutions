class Solution {
public:
    int passwordStrength(std::string password) {
        int strength = 0;
        vector<bool> seen(256, false); 

        for (char ch : password) {
            if (!seen[ch]) {
                seen[ch] = true;

                if (ch >= 'a' && ch <= 'z') {
                    strength += 1;
                } else if (ch >= 'A' && ch <= 'Z') {
                    strength += 2;
                } else if (ch >= '0' && ch <= '9') {
                    strength += 3;
                } else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') {
                    strength += 5;
                }
            }
        }
        return strength;
    }
};
