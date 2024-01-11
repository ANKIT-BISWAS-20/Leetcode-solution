class Solution(object):
    def removeElement(self, nums, val):
        count=0
        while count < (len(nums)):
            if nums[count]==val:
                nums.pop(count)
                count=count-1
            count=count+1
        return len(nums)