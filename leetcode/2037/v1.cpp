class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        
        int min_moves {};
        for (int i {}; i < students.size(); i++) {
            min_moves += abs(students.at(i) - seats.at(i));
        }
        return min_moves;
    }
};
