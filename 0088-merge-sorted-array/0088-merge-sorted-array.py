class Solution(object):
    def merge(self, nums1, m, nums2, n):
        index_merged = m + n - 1
        index_nums1 = m - 1
        index_nums2 = n - 1
        while index_nums1 >= 0 and index_nums2 >= 0:
            if nums1[index_nums1] > nums2[index_nums2]:
                nums1[index_merged] = nums1[index_nums1]
                index_nums1 -= 1
            else:
                nums1[index_merged] = nums2[index_nums2]
                index_nums2 -= 1
            index_merged -= 1
        while index_nums2 >= 0:
            nums1[index_merged] = nums2[index_nums2]
            index_nums2 -= 1
            index_merged -= 1
            