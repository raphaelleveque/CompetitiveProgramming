def lengthOfLongestSubstring(s: str) -> int:
    mymap = set()
    ans = ""
    cur_ans = ""
    for i in range(len(s)):
        if s[i] not in mymap:
            mymap.add(s[i])
            cur_ans += s[i]
        else:
            mymap.remove(s[i])
            if len(cur_ans) > len(ans):
                ans = cur_ans
            if i > 0 and s[i - 1] != s[i]:
                cur_ans = cur_ans[cur_ans.find(s[i]) + 1:]
            else:
                cur_ans = ""
            mymap.add(s[i])
            cur_ans += s[i]
    return max(len(ans), len(cur_ans))

print(lengthOfLongestSubstring("abcabcbb"))