class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = 0
        start = 0
        cur_len = 1
        
        if len(s) == 0:
            return 0
        else:
            for i in range(1, len(s)):
                if s[i] in s[start:i]:
                    if len(s[start:i]) > result:
                        result = len(s[start:i])
                    loc = s[start:i].index(s[i])
                    start = start + loc + 1
                    cur_len = len(s[start:i]) + 1
                else:
                    cur_len += 1

            if cur_len > result:
                result = cur_len
            
            return result
