def linear_search(arr,key,start,end):
    print
    for num in range (start,end):

        if(arr[num]==key):
            return num
    


def jump_search(arr,key,b,start):
    length=len(arr)
    if(start<length):
        if(arr[start]==key):
            return start
        start=start+b
        
        if(key<arr[start]):
           

            return linear_search(arr,key,start-4,start)
        else:
            
            return jump_search(arr,key,b,start)





if __name__=="__main__":
    arr=[1,1,2,3,5,8,13,21,34,55,89,144,233,377,610]
    result=jump_search(arr,55,4,0)
    print result