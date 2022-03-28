class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max{}, height {};
        for (auto h : gain) {
            height += h;
            if (height > max) max = height;
        }
        return max;
    }
};
