int sumOddLengthSubarrays(vector<int>& arr) {
    int sum {};
    for (int i{1}; i <= arr.size(); i += 2) {
        for (int j {0}; j <= arr.size() - i; j++) {
            // This will add all the numbers between arr[j] and arr[j + i] (not including the last element)
            // The last position of arr[j + i] will not accumulate, it's just a flag to tell where to end
            // Because i += 2, so this function will always sum odd arrays
            sum += accumulate(arr.begin() + j, arr.begin() + (j + i), 0);
        }
    }
    return sum;
}