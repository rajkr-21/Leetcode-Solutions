class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // Overlap on X-axis: max of left edges < min of right edges
        bool overlapX = max(rec1[0], rec2[0]) < min(rec1[2], rec2[2]);
        
        // Overlap on Y-axis: max of bottom edges < min of top edges
        bool overlapY = max(rec1[1], rec2[1]) < min(rec1[3], rec2[3]);
        
        return overlapX && overlapY;
    }
};
