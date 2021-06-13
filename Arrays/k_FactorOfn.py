#Given two positive integers n and k.
#A factor of an integer n is defined as an integer i where n % i == 0.
#Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.

class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        
        
        u=[]
        
        for i in range(1,int(n**(0.5))+1):
            
            if n%i==0:
                u.append(i)
                
                if n//i != i:
                    u.append(n//i)
        u.sort() 
        if k<=len(u):
            return u[k-1]
        return -1
