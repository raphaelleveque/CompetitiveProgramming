int sumOddLengthSubarrays(vector<int>& arr) {
    int sum {};
    for (int i{1}; i <= arr.size(); i += 2) {
        for (int j {0}; j <= arr.size() - i; j++) {

            // Accumulate function::
            // 1st Parameter: Where it will start
            // 2nd Parameter: Where it will end (the ending does not accumulate, it's just a flag where to end)
            // 3rd Parameter: What we will add to the accumulate function
            // Return: It will return the sum of all the values between the first iterator and the last, adding to it the last parameter
            sum += accumulate(arr.begin() + j, arr.begin() + (j + i), 0);
        }
    }
    return sum;
}