class Solution(object):
    def reverseWords(self, s):
        list1 = list(s.split(" "))
        list1.reverse()
        counting = 0
        str1 = ''
        for i in list1:
            if i == '' and counting == 0:
                pass
            elif i != '' and counting == 0:
                counting = 1
                str1 = str1 + str(i)
            elif i != '' and counting == 1:
                str1 = str1 + " "
                str1 = str1 + str(i)
        return str1

        