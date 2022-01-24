class Solution {
public:
    string defangIPaddr(string address) {
        int index {};
        while (index < address.length()) {
            if (address[index] == '.') {
		// .replace(index to replace, length to replace, what to replace with)
                address.replace(index, 1, "[.]");
                index += 2;
            }
            index ++;
        }
        return address;
    }
};
