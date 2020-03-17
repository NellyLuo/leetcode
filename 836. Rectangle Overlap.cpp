class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int r1x = rec1[2], r1y = rec1[3];
        int l1x = rec1[0], l1y = rec1[1];
        int r2x = rec2[2], r2y = rec2[3];
        int l2x = rec2[0], l2y = rec2[1];

        if(r1x > l2x && r1y > l2y && l1x < r2x && l1y < r2y) return true;
        if(r2x > l1x && r2y > l1y && l2x < r1x && l2y < r1y) return true;

        return false;

    }
};
