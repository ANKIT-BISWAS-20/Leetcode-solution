class Solution(object):
    def isPowerOfTwo(self, n):
            if n<0:
                return False
            if n==1:
                return True
            if n == 0:
                return False
            while n>1:
                rem = n%2
                n = n/2
                if rem==1 :
                    return False
            return True
        