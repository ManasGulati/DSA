class Solution(object):
    def lengthOfLastWord(self, s):
        
        leng=len(s.strip().split(" ")[-1])
        return leng
        