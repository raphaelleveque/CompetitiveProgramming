class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length());
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans.size(); j++) {
                if (boxes[j] == '1') {
                    ans[i] += abs(j - i);
                }
            }
        }
        return ans;
    }
};
