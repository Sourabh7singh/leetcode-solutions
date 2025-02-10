class Solution(object):
    def clearDigits(self, s):
        """
        :type s: str
        :rtype: str
        """ 
        k=0
        while len(s)>0 and k<len(s):
            element = s[k]
            if element.isdigit():
                # if k>=2:
                if k==0 or k==1:
                    s = s[k+1:]
                    if k==1:
                        k=k-2
                        # continue
                else:
                    if k<len(s):
                        s = s[0:k-1] + s[k+1:]
                    else:
                        s = s[0:k-1]
                    k=k-3
                    # continue
            k+=1

        return s 

        