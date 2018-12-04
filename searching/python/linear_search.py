def linear_search(arr,key):
    for num in range (len(arr)):
        if arr[num]==key:
            print num
            break

if __name__=="__main__":
    arr=[10,20,80,30,50,110,100,130,170]
    linear_search(arr,110)