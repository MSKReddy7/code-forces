n,k = [int(i) for i in input().split()]
nums = [int(i) for i in input().split()]
 
v = nums[k-1]
 
while nums and (nums[-1] < v or nums[-1]==0):
    nums.pop()
    
print(len(nums))