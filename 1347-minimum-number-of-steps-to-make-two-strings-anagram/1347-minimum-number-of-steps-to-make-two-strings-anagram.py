class Solution(object):
    def minSteps(self, s, t):
        count = 0
        for i in t:
            if i in s:
                s = s.replace(i,"",1)
            else:
                count = count + 1
        return count