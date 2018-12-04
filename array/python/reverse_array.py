
def reverse_array(array):
    start=0
    end=len(array)-1
    for num in range (end/2):
        array[start],array[end]=array[end],array[start]
        start=start+1
        end=end-1
    print array

if __name__ == "__main__":
    array=[1,2,3,4,5,3,6,8,0]
    reverse_array(array)
