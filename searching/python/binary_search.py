def binary_search(arr,key,start,end):
    if end>=start:
        mid=start+(end-start)/2
        if(key==arr[mid]):
            return mid
        if(key<arr[mid]):
            return binary_search(arr,key,0,mid-1)
        else:
            return binary_search(arr,key,mid+1,end)


if __name__=="__main__":
    arr=[2,5,8,16,23,38,56,72,91]
    start=0
    end=len(arr)-1
    result= binary_search(arr,8,start,end)
    print result