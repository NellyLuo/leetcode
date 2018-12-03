class Solution(object):
    def findAndReplacePattern(self, words, pattern):
        """
        :type words: List[str]
        :type pattern: str
        :rtype: List[str]
        """
        def match(word):
            tmp = {}

            for x, y in zip(pattern, word):  
                if tmp.setdefault(x, y) != y: return False

            return len(set(tmp.values())) == len(tmp.values())  

        return list(filter(match, words))  
