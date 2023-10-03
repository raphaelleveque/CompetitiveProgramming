#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int maxSeq = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int seq = 1;
            int lastNum = nums[i];
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
            int nextNum = nums[i+1];
            while (i + 1 < nums.size() && lastNum + 1 == nextNum) {
                seq++;
                i++;
                while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
                lastNum = nextNum;
                nextNum = nums[i + 1];
                if (maxSeq < seq) maxSeq = seq;
            }
        }

        return maxSeq;
    }
};


int main() {
    vector<int> v = {100,4,200,1,3,2};
    Solution s;
    cout << s.longestConsecutive(v) << endl;
    return 0;
}
