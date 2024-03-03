
class Solution:
    def get_area(self,bottom_left_a,top_right_a , bottom_left_b, top_right_b):
        
    
        left_a = bottom_left_a[0]
        right_a = top_right_a[0]
        up_a = top_right_a[1]
        down_a = bottom_left_a[1]
        

        left_b = bottom_left_b[0]
        right_b = top_right_b[0]
        down_b = bottom_left_b[1]
        up_b = top_right_b[1]
        
        
        
        horizontal_side = 0
        if not (max(left_a , left_b) >= min(right_a , right_b)):
            horizontal_side = (max(right_a , right_b) - min(left_a , left_b)) - (abs(left_a-left_b)) - (abs(right_a-right_b))
        
        
        vertical_size = 0
        
        if not (max(down_a , down_b) >= min(up_a , up_b)):
            vertical_size = (max(up_a , up_b) - min(down_a , down_b)) - (abs(up_a-up_b)) - (abs(down_a-down_b))
            
        return min(horizontal_side , vertical_size)**2
        
                
                
                
        



    def largestSquareArea(self, bottomLeft, topRight) -> int:

        n = len(bottomLeft)
        ans = 0
        
        for i in range(0,n-1):
            for j in range(i+1 ,n):
                if i == j:
                    continue
                local = self.get_area(bottomLeft[i],topRight[i],  bottomLeft[j],topRight[j])
                if local > ans:
                    ans = local
        
        return ans



s = Solution()

bottomLeft = [[1,1],[2,2]]
topRight = [[3,3],[4,4]]

print(s.largestSquareArea(bottomLeft,topRight))



    













