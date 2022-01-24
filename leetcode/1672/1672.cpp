class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth {};
        for (int i {}; i < accounts.size(); i++) {
            int tmpMaxWealth {};
            for (int j {}; j < accounts[0].size(); j++) {
                tmpMaxWealth += accounts[i][j];
            }
            if (tmpMaxWealth > maxWealth)
                maxWealth = tmpMaxWealth;
        }
        return maxWealth;
    }
};
