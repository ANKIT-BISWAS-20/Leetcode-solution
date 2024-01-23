class Solution(object):
    def findErrorNums(self, nums):
        nums.sort()
        if nums[0]>1:
            notfound = nums[0]-1
        else:
            notfound = 0
        doublefound = 0
        i = 0
        while i < len(nums)-1:
            j = i + 1
            if nums[i]==nums[j]:
                doublefound = nums[i]
            else:
                if nums[j]-nums[i]>1:
                    notfound = nums[i]+1
            i = i + 1
        if len(nums)==2 and nums[i]>1 and doublefound != 0:
            return [doublefound,doublefound-1]
        elif len(nums)==2 and nums[i]==1 and doublefound != 0:
            return [doublefound,doublefound+1]
        elif notfound == 0:
            return [doublefound,nums[len(nums)-1]+1]
        return [doublefound,notfound]