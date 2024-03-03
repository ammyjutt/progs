

def print_mat(mat):
    for row in mat:
        print(row)
    print("\n\n")




class Solution:
    

    def fill(self , dp , m , n):
        # first row with 1s
        dp[0] = [1 for _ in range(n+2)]
        # first col with 1s 
        for i in range(m+2):
            dp[i][0] = 1
        # last row with 1s
        dp[m+1] = [1 for _ in range(n+2)]
        # last col with 1s
        for i in range(m+2):
            dp[i][n+1] = 1
            
    


    def findPaths(self, m: int, n: int, maxMove: int, startRow: int, startColumn: int) -> int:
        # pad the matrix with 1s from top , bottom , left and right
        
        cur = [[0 for _ in range(n+2)] for _ in range(m+2)]
        self.fill(cur , m , n)
        prev = [row[:] for row in cur]
        
        for k in range(1 , maxMove+1):
            
            temp = cur
            cur = prev
            prev = temp
            for i in range(1 , m+1):
                for j in range(1 , n+1):
                    # the current cell is the sum of the previous cells
                    cur[i][j] = (prev[i-1][j] + prev[i+1][j] + prev[i][j-1] + prev[i][j+1]) % 1000000007
                    
        # return the result
        return cur[startRow+1][startColumn+1] % 1000000007
            



s = Solution()
print(s.findPaths(2,2,2,0,0))


