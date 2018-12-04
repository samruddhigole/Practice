
def max_mult(array):
	max_no1=array[0]
	max_no2=array[1]
	for num1 in range (1,len(array)):
		if(array[num1]>max_no1):
			max_no2=max_no1
			max_no1=array[num1]
		elif(array[num1]>max_no2):
			max_no2=array[num1]
	max_multi=max_no1*max_no2
	print max_no1,
	print max_no2
	print max_multi


num_array=list()
num=raw_input("enter length of array")
print "enter numbers in array"
for i in range (int(num)):
	n=raw_input("num:")
	num_array.append(int(n))
print num_array
max_mult(num_array)
