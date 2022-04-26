class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        // Creating a matrix with to tell the maximum element of each row/column
        // max_elem[i][row = 0, column = 1]
        vector<vector<int>> max_elem(grid.size(), vector<int>(2));
        const short row = 0;
        const short column = 1;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                if (grid[i][j] > max_elem[i][row])
                    max_elem[i][row] = grid[i][j];
                if (grid[j][i] > max_elem[i][column])
                    max_elem[i][column] = grid[j][i];
            }
        }
        
        // Now, in order to not change the skyline, I have to compare each grid to the highest building in its row and column
        // and then, make it as big as the smallest between the two highest, because if I make it higher it will change the skyline
        int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                int max_building = min(max_elem[i][row], max_elem[j][column]);
                sum += max_building - grid[i][j];
            }
        }
        
        return sum;
    }
};
