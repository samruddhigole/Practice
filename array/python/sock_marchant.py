#arr=[1,2,1,2,1,3,2]
arr=[10,20,20,10,10,30,50,10,20]
list1=[]
def sock_marchant(arr):
    count=0
    for num1 in range (len(arr)):
        if(arr[num1]!=0):
            temp=arr[num1]
            for num2 in range (num1+1,len(arr)):
                if temp==arr[num2]:
                    list1.append(temp)
                    count=count+1
                    arr[num2]=0
                    break
        else:
            pass
    return count
    
if __name__=="__main__":
    result=sock_marchant(arr)
    print result