array=[13,2,55,6,4,88,2,3]

def max_mult_bruteforce(array):
	max_pro=0
	for num1 in range (0,len(array)):
		for num2 in range (num1+1,len(array)-1):
			product=array[num1]*array[num2]
			if(product>max_pro):
				max_pro=product
	print max_pro



max_mult_bruteforce(array)
