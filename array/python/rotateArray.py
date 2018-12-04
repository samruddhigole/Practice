array=[34,2,56,7,3,6,1]


def rotateArray(array,x):
	for num in range (0,x):
		temp=array[0]
		for num1 in range(0,len(array)-1):
			array[num1]=array[num1+1]
		array[num1+1]=temp
	print array

rotateArray(array,3)
