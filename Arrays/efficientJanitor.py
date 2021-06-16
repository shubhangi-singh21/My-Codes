def efficientJanitor(weight):
	# Write your code here
	count = 0
	i,j = 0,len(weight)-1
	weight.sort()
	while i<=j:
    	 count+=1
    	 if weight[i] + weight[j] <= 3:
        	  i+=1
    	 j -= 1
         return count
