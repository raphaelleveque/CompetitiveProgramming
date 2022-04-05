// TLE - NOT WORKING

class Solution {
public:
    bool distance(vector<int> points, vector<int> circle) {
        double d = sqrt(pow(points[0] - circle[0], 2) + pow(points[1] - circle[1], 2));
        return d <= circle[2];
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            for (int j = 0; j < points.size(); j++) {
                if (distance(points[j], queries[i]))
                    ans[i]++;
            }
        }
        return ans;
    }
};