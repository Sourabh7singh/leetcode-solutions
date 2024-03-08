class Solution(object):
    def uniqueOccurrences(self, arr):
        unique = list(set(arr))
        count = []
        for i in unique:
            count.append(arr.count(i))
        if(len(count)==1):
            return True
        count.sort()
        for i in range(len(count)):
            if count[i]==count[i-1]:
                return False
        return True 
        