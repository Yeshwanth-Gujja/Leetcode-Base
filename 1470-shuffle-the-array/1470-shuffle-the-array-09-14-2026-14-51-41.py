class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        arr = [0] * (2*n)
        even = 0 
        odd = n
        for i in range(0,2*n): 
            if i % 2 == 0 :
                arr[i] = nums[even] 
                even += 1
            else: 
                arr[i] = nums[odd]
                odd += 1 
        return arr