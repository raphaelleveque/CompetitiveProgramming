class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        for (int i{1}; i <= n; i+=2) {
            if (i == n)
                arr[i - 1] = 0;
            else {
                arr[i - 1] = i;
                arr[i] = -i;
            }
        }
        return arr;
    }
};
