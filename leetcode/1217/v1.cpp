class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even{}, odd{};
        for (int i{}; i < position.size(); i++) {
            if (position[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        return min(even, odd);
    }
};
