class Solution(object):
    def twoSum(self, nums, target):
        count=0
        length = len(nums)
        for i in range(0,length-1):
            for j in range(i+1,length):
                if nums[i]+nums[j]==target:
                    count=1
                    return [i,j]
        if count==0:
            return [-1 ]


        