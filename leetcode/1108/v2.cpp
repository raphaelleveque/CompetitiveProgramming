class Solution {
public:
    string defangIPaddr(string address) {
        // It will find all occurences of '.' and replace to "[.]"
        // The \\ is used to escape the . character
        return regex_replace(address, regex("\\."), "[.]");
    }
};
