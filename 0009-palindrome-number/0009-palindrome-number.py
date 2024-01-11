class Solution(object):
    def isPalindrome(self, x):
        real = x
        rev = 0
        while x > 0:
            rem = x % 10
            x = x / 10
            rev = ( rev * 10 ) + rem
        if real == rev:
            return True
        return False
        