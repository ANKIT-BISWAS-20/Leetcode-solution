class Solution(object):
    def halvesAreAlike(self, s):
        v1 = 0
        v2 = 0
        i = 0
        vowel = "aeiouAEIOU"
        while i < len(s):
            if s[i] in vowel and i<len(s)/2:
                v1 += 1
            elif s[i] in vowel and i>=len(s)/2:
                v2 += 1
            i = i +1
        if v1 == v2:
            return True
        return False