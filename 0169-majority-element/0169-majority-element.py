class Solution(object):
    def majorityElement(self, nums):
        nums.sort()
        if len(nums)==1:
            return nums[0]
        i = 1
        maxm = 1
        maxi = nums[0]
        count = 1
        index = nums[0]
        while i < len(nums):
            if index == nums[i]:
                count = count + 1
                if maxm < count:
                    maxm = count
                    maxi = nums[i]
            else:
                count = 1
                index = nums[i] 
            i = i + 1
        if maxm >= (len(nums)//2):
            return maxi
        else:
            retrun -1
        