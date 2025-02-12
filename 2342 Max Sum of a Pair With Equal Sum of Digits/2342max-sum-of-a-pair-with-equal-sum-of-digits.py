class Solution(object):
    def getElementSum(self,num):
        sum = 0
        while num>0:
            sum += num%10
            num = num //10
        return sum
    def maximumSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxSum=-1
        hashmap = {}
        indexmap={}
        for i in range(len(nums)):
            element_sum = self.getElementSum(nums[i])
            existingElement = hashmap.get(element_sum)
            if existingElement:
                if existingElement<nums[i]:
                    hashmap[element_sum] = nums[i]
                    indexmap[element_sum] = i
            else:
                hashmap[element_sum] = nums[i]
                indexmap[element_sum] = i

        for i in range(len(nums)):
            element_sum = self.getElementSum(nums[i])
            index = indexmap.get(element_sum)
            if index!=i:
                existingElement = hashmap.get(element_sum)
                maxSum = nums[i]+existingElement if nums[i]+existingElement > maxSum else maxSum
            
        return maxSum


        