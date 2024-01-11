class Solution(object):
    def lengthOfLastWord(self, s):
        counting = 0
        count = 0
        i = len(s)-1
        while i>=0:
            if s[i] == " " and counting == 0:
                pass
            if s[i] != " " and counting == 0:
                counting = 1
                count = count + 1
            elif s[i] != " " and counting == 1:
                count = count + 1
            if s[i] == " " and counting == 1 :
                return count
            i = i - 1 
        return count


        