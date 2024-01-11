class Solution(object):
    def removeDuplicates(self, nums):
        first = nums[0]
        count = 1
        while count < len(nums):
            if nums[count]==first:
                nums.pop(count)
                count=count-1
            else:
                first=nums[count]
            count=count+1
        return len(nums)
        