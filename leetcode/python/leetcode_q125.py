class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = ''
        if(s == '' or s == ' '):
            return True
        for i in s:
            if i.isalnum():
                res += i.lower()
        print(res)
        return res == res[::-1]