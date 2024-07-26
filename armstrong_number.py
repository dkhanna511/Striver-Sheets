#User function Template for python3

class Solution:
    def armstrongNumber (self, n):
        # code here 
        num = 0
        n_copy = n
        n_digits = len(str(n))
        while n > 0:
            digit = n%10
            # print(" digit is : ", digit)
            val = digit ** n_digits
            num = num + val
            n = int(n/10)
        # print(" num is : ", num)
        if num == n_copy:
            return "true"
            
        return "false"
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = input()
        n = int(n)
        ob = Solution()
        print(ob.armstrongNumber(n))

# } Driver Code Ends