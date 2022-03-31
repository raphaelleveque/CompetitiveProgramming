class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> a(n)
        for (int i = 1; i < n; i++) {
            // I add numbers in the array, and then 
            // subtract the added number in arr[0]
            a[i] = i;
            a[0] -= i;
        }
        return a;
    }
};
