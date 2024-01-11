class Solution(object):
    def plusOne(self, digits):
        digits.reverse()
        rem = 1
        i = 0
        while i < len(digits) :
            if digits[i] + 1 == 10 and rem == 0:
                rem = 1
            elif digits[i] + 1 < 10 and rem == 0:
                rem = 0
            elif digits[i] + 1 < 10 and rem == 1:
                digits[i] = digits[i] + 1
                digits.reverse()
                return digits
            elif digits[i] + 1 == 10 and rem == 1:
                digits[i] = 0                
                rem = 1
            i = i + 1
        digits.append(rem)
        digits.reverse()
        return digits
        