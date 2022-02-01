class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr (encoded.size() + 1);
        arr.at(0) = first;
        
        // Since that encoded[i] = arr[i] XOR arr[i+1], then arr[i+1] = encoded[i] XOR arr[i]
        for (int i {}; i < encoded.size(); i++) {
            arr.at(i + 1) = arr.at(i) ^ encoded.at(i);
        }
        return arr;
    }
};

/*
* (encoded[i] = arr[i] ^ arr[i + 1]  )  ^ arr[i + 1] ^ encoded[i]
* encoded[i] ^ arr[i + 1]   ^   encoded[i] = arr[i] ^ arr[i + 1]   ^   arr[i + 1] ^ encoded[i]
* arr[i + 1] = a[i] ^ encoded[i]
*/
