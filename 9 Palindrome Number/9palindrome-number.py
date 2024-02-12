class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if (x<0):
            return False
        else:
            rev=0
            num = x
            while(x!=0):
                rem = x%10
                rev = rev*10+rem
                x=x/10
            if num==rev:
                return True
            else:
                return False

        