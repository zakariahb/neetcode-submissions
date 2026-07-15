class Solution:
    def maxArea(self, heights: List[int]) -> int:
        j = len(heights) - 1
        formula = 0;
        res = 0;
        i = 0;
        while i != j:
            formula = (j - i) * min(heights[i], heights[j]);
            if (formula > res):
                res = formula
                formula = 0
            if heights[i] < heights[j]:
                i += 1
            else:
                j -= 1

        return res
        