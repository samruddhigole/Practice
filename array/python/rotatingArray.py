array=[1,2,3,4,5]

def rotatingArray(array,d):
    for num in range (0,d):
        temp=array[0]
        for num1 in range(0,len(array)-1):
            array[num1]=array[num1+1]
        array[num1+1]=temp
    print array
rotatingArray(array,4)
