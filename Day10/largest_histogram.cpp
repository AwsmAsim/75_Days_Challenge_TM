class Solution(object):
    
    def nser(self, nums):
        n = len(nums)
        answer = list()
        stack = []
        for i in range(n-1, -1, -1):
            while len(stack)>0 and nums[stack[-1]] >= nums[i]:
                stack.pop()
            if(len(stack)) == 0:
                answer.append(n)
            else:
                answer.append(stack[-1])
            stack.append(i)
        return answer[::-1]
        
    def nsel(self, nums):
        n = len(nums)
        answer = []
        stack = []
        for i in range(0, n):
            while len(stack) > 0 and nums[stack[-1]] >= nums[i]:
                stack.pop()
            if len(stack) == 0:
                answer.append(-1)
            else:
                answer.append(stack[-1])
            stack.append(i)
        return answer
    
    def largestRectangleArea(self, heights):
        
        NSER = self.nser(heights)
        NSEL = self.nsel(heights)
        print('NSER:', NSER)
        # print('NSEL:', NSEL)
        maxA = -float('inf')
        
        for i in range(len(heights)):
            area = heights[i] * abs(NSEL[i] - NSER[i] + 1)
            # print('area: ', area)
            maxA = max(maxA, area)
            
        return maxA
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        