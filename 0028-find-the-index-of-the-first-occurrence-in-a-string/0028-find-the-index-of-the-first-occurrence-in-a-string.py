class Solution(object):
    def strStr(self, haystack, needle):
        l1 = list(haystack.split(needle))
        if l1[0]=='':
            return 0
        elif len(l1)==1:
            return -1
        else:
            return len(l1[0])

            

        