array=[7,4,5,7,3]
list1=[]
def leader_of_array(array):
    for num in range (len(array)-1):
        temp=array[num]
        flag=0
        for num1 in range (num+1,len(array)-1):
            if(temp<array[num1]):
                flag=1
                break
            
        if flag==0:
            list1.append(temp)
            
        
    list1.append(array[len(array)-1])
    print list1

leader_of_array(array)