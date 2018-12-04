def maxmin(arr,maxsum,minsum):
    for num1 in range (len(arr)):
        maxsum=maxsum+arr[num1]
     
     #   print min(arr)
    maxsum=maxsum-min(arr)
    print maxsum

    for num2 in range (len(arr)):
        minsum=minsum+arr[num2]
    #    print max(arr)
    minsum=minsum-max(arr)
    print minsum





if __name__=="__main__":
    arr=[1,2,3,4,5]
    maxsum=0
    minsum=0
    maxmin(arr,maxsum,minsum)