class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        
        if(len(nums) == 1):
            return nums[0]

        ans = 0 
        dp_prev = 0
        dp_neg = 0


        

        last_neg_ix = -1
        neg_even = True
        

        for i in range(len(nums)):
            if nums[i] > 0:
                if i == 0:
                    ans= dp_prev = nums[i]
                else:
                    dp_prev = dp_prev*nums[i] if dp_prev != 0 else nums[i]
                    # update ans 
                    if neg_even:
                        ans = max(ans , dp_prev)
                    else:
                        ans = max(ans , dp_prev/dp_neg)
                    
                  

            elif nums[i] < 0:

                neg_even = not neg_even
               
                if i == 0:
                    last_neg_ix = 0
                    dp_prev = nums[i]
                    dp_neg = nums[i]
                    
                else:
                    dp_prev = dp_prev*nums[i] if dp_prev != 0 else nums[i]
                    if last_neg_ix == -1:
                        last_neg_ix = i
                        dp_neg = dp_prev
                        ans = max(ans , dp_prev)
                    else:
                        if neg_even:
                            ans = max(ans , dp_prev)
                        else:
                            ans = max(ans , dp_prev/dp_neg)
                
                

            else: # zero 
                dp_prev = 0
                ans = max(ans , 0)
                neg_even = True
                last_neg_ix = -1

        return int(ans)

        