from functools import lru_cache
from itertools import count


class Solution:
    
    @lru_cache(None)
    def fun(self, i, s, counter):
        if i == len(s):
            return counter == 0
        
        if counter < 0:
            return False
        
        if s[i] == '*':
            if counter > 0:
                return self.fun(i+1,s,counter-1) or self.fun(i+1,s,counter) or self.fun(i+1,s,counter+1)
            else:
                return self.fun(i+1,s,counter+1) or self.fun(i+1,s,counter)
                
        if s[i] == '(':
            return self.fun(i+1,s,counter+1)
        
        return self.fun(i+1,s,counter-1)
                
                





    def checkValidString(self, s: str) -> bool:
        return self.fun(0,s,0)
        
        
