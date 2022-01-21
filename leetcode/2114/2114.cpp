#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans {1};
        for (auto x : sentences) {
            int c {};
            int tmpAns {1};
            do {
                char teste = x[c];
                if (x[c] == ' ')
                    tmpAns++;
                c++;
                
            } while (c != x.size());
            
            if (tmpAns > ans)
                ans = tmpAns;
        }
        return ans;
    }
};

int main() {
    vector<string> sentences {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    Solution s;
    int a = s.mostWordsFound(sentences);
    cout << a << endl;
}