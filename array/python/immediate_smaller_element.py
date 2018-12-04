array=[5,6,2,3,1,7]
list1=[]
def immediate_smaller(array):
    for num in range (0,len(array)-1):
        if(array[num+1]<array[num]):
            list1.append(array[num+1])
        else:
            list1.append(-1)
    list1.append(-1)
    print list1


immediate_smaller(array)
