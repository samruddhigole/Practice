array=[34,2,5,45,65,7,3,5,7,1]

def rotateGroup(array,x):
	for index in range (0,len(array)-1):
		temp=array[index]
		for num in range (index,((index+x)-2)):
			array[num]=array[num+1]
		array[num+1]=temp
	index=num

	print array

rotateGroup(array,3)
