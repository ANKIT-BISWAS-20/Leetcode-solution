class Solution(object):
    def letterCombinations(self, digits):
        digit_to_letters = {
                '2': 'abc',
                '3': 'def',
                '4': 'ghi',
                '5': 'jkl',
                '6': 'mno',
                '7': 'pqrs',
                '8': 'tuv',
                '9': 'wxyz'
            }
        def generate_combinations(index, current_combination):
            if index == len(digits):
                result.append(current_combination)
                return
            letters = digit_to_letters[digits[index]]
            for letter in letters:
                generate_combinations(index + 1, current_combination + letter)
        result = []
        if digits:
            generate_combinations(0, "")

        return result