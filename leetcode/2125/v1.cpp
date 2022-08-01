class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // sec_devices means the number of security devices on the next level
        int sec_devices = 0;
        int ans = 0;
        
        // This is a reverse for loop, because we need to know before how many security devices
        // there are in the next level to know how many lasers will leave this level sec devices
        for(vector<string>::reverse_iterator it = bank.rbegin(); it != bank.rend(); ++it) {
            // This temporary counter tells how many sec devices there are on this level
            int temp = count(it->begin(), it->end(), '1');
            
            if (temp == 0)
                continue;
            
            // The ans gets incremented with the sec devices of this level 
            // times the sec devices of the next level
            ans += temp * sec_devices;
            
            sec_devices = temp;
        }
        return ans;
    }
};
