vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> res;
    for (int i=0; i<nums.size(); i+=2)
	// Insert, starting from res.end(), inserting num[i] times, the number num[i+1] will be inserted
        res.insert(res.end(), nums[i], nums[i+1]);
    return res;
}
