class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int distance_x {}, distance_y {}, time {};
        for (int i{}; i < points.size() - 1; i++) {
            distance_x = abs(points.at(i).at(0) - points.at(i + 1).at(0));
            distance_y = abs(points.at(i).at(1) - points.at(i + 1).at(1));
            time += max(distance_x, distance_y);
        }
        return time;
    }
};
