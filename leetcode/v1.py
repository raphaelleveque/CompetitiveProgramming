def isPalindrome(s: str) -> bool:
    i = 0
    j = len(s) - 1
    while (i <= j):
        while (i <= j and not s[i].isalnum()):
            i += 1
        while (j >= i and not s[j].isalnum()):
            j -= 1
        if (i > j):
            return True
        if (s[i].lower() != s[j].lower()):
            return False
        i += 1
        j -= 1

isPalindrome("A man, a plan, a canal: Panama")