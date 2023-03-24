nums = [-1,0,1,0]
nums = sorted(nums)
triplets = []
demand = {}

a,b = 0,1
for i in range(len(nums)-1):
    sum = nums[a] + nums[b]
    if -sum in [nums[i] for idx, i in enumerate(nums) if idx not in [a,b]]:
        triplet = sorted([nums[a],nums[b],-sum])
        if triplet not in triplets:
            triplets.append(triplet)  
    
    demand[-nums[b]-nums[a]] = sorted([nums[a],nums[b]])
    
    if nums[a] in demand.keys():
        triplet = sorted(demand[nums[a]]+[nums[a]])
        if triplet not in triplets:
            triplets.append(triplet)
    if nums[b] in demand.keys():
        triplet = sorted(demand[nums[b]]+[nums[b]])
        if triplet not in triplets:
            triplets.append(triplet)
                 
    a+=1
    b+=1

print(demand)
print(triplets)