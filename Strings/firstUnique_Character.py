#Given a string s, return the first non-repeating character in it and return its index. If it does not exist, return -1.


class Solution:
    def firstUniqChar(self, s: str) -> int:        
        count = {}
        for ch in s:
            count[ch] = count.get(ch, 0) + 1
        
        for i, ch in enumerate(s):
            if count[ch] == 1:
                return i+1
        
        return -1
