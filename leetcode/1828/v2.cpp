class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        // The euclidean distance must be less or equal to the radius
        double dd;
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            for (int j = 0; j < points.size(); j++) {
                // Instead of doing sqrt(), I'll just power the radius to the square
                dd = pow(points[j][0] - queries[i][0], 2) + 
                    pow(points[j][1] - queries[i][1], 2);
                if (dd <= queries[i][2] * queries[i][2])
                    ans[i]++;
            }
        }
        return ans;
    }
};
